#include "CXPlayerController.h"
#include "CXPlayerState.h"
#include "CXPawn.h"
#include "CXUI.h"
#include "EngineUtils.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/PlayerState.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "Net/UnrealNetwork.h"

// Implementation 이란?
void ACXPlayerController::ServerToClient_ChatLog_Implementation(const TArray<FChatData>& ChatLog)
{
	if(UChatSubsystem* ChatSubsystem = GetWorld()->GetSubsystem<UChatSubsystem>())
	{
		ChatSubsystem->SetChatLog(ChatLog);
	}
}

void ACXPlayerController::ClientToServer_ChatMessage_Implementation(const FString& Message)
{
	const FString PlayerName = Cast<ACXPlayerState>(PlayerState)->PlayerNameString;

	if(UChatSubsystem* ChatSubsystem = GetWorld()->GetSubsystem<UChatSubsystem>())
	{
		// 서버에서 채팅 메시지를 기록.
		ChatSubsystem->AddChatMessage(PlayerName, Message);
	}

	// 서버에서 클라이언트로 메시지를 전달하는 로직을 구현.
	for (TActorIterator<ACXPlayerController> It(GetWorld()); It; ++It)
	{
		if (ACXPlayerController* PlayerController = *It)
		{
			PlayerController->ServerToClient_ChatMessage(PlayerName, Message);
		}
	}
}

void ACXPlayerController::ServerToClient_ChatMessage_Implementation(const FString& Sender, const FString& Message)
{
	// 클라이언트에서 UI에 메시지를 표시하는 로직을 구현.
	VehicleUI->OnNewChatMessage(Sender, Message);
}

void ACXPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalController() == false)
	{
		return;
	}
	
	if (IsValid(NotificationTextWidgetClass))
	{
		if (NotificationTextWidgetInstance = CreateWidget<UUserWidget>(this, NotificationTextWidgetClass))
		{
			NotificationTextWidgetInstance->AddToViewport();
		}
	}

	// spawn the UI widget and add it to the viewport
	VehicleUI = CreateWidget<UCXUI>(this, VehicleUIClass);
	check(VehicleUI);
	VehicleUI->AddToViewport();

	if (UChatSubsystem* ChatSubsystem = GetWorld()->GetSubsystem<UChatSubsystem>())
	{
		const TArray<FChatData>& ChatLog = ChatSubsystem->GetChatLog();

		for (const FChatData& ChatData : ChatLog)
		{
			VehicleUI->OnNewChatMessage(ChatData.Sender, ChatData.Message);
		}

		ChatSubsystem->ClearChatLog();
	}
}

void ACXPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);

		// optionally add the steering wheel context
		if (bUseSteeringWheelControls && SteeringWheelInputMappingContext)
		{
			Subsystem->AddMappingContext(SteeringWheelInputMappingContext, 1);
		}
	}
}

void ACXPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, NotificationText);
	DOREPLIFETIME(ThisClass, VehiclePawn);
}

void ACXPlayerController::Tick(float Delta)
{
	Super::Tick(Delta);

	if (IsValid(VehiclePawn) && IsValid(VehicleUI))
	{
		VehicleUI->UpdateSpeed(VehiclePawn->GetChaosVehicleMovement()->GetForwardSpeed());
		VehicleUI->UpdateGear(VehiclePawn->GetChaosVehicleMovement()->GetCurrentGear());
	}
}

void ACXPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// get a pointer to the controlled pawn
	VehiclePawn = CastChecked<ACXPawn>(InPawn);
}
