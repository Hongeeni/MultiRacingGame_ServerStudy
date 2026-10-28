// CXGameMode.cpp

#include "CXGameMode.h"
#include "CXPlayerController.h"
#include "CXPlayerState.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "GameState/CXGameStateBase.h"
#include "GameFramework/PlayerStart.h"
#include "Subsystem/ChatSubsystem.h"

ACXGameMode::ACXGameMode()
{
	PlayerControllerClass = ACXPlayerController::StaticClass();
	PlayerStateClass = ACXPlayerState::StaticClass();
}

void ACXGameMode::BeginPlay()
{
	Super::BeginPlay();

	ACXGameStateBase* CXGameState = GetGameState<ACXGameStateBase>();
	if (IsValid(CXGameState))
	{
		CXGameState->SetGameState(EGameState::Wating);
		CXGameState->SetRemainingTime(5);
	}
}

void ACXGameMode::StartWaitingCountdown()
{
	bWaitingCountdownStarted = true;

	ACXGameStateBase* CXGameState = GetGameState<ACXGameStateBase>();
	CXGameState->SetGameState(EGameState::Wating);
	CXGameState->SetRemainingTime(5);
	GetWorldTimerManager().SetTimer(GameTimerHandle, this, &ACXGameMode::HandleWaitingTimerTick, 1.f, true);
}
void ACXGameMode::HandleWaitingTimerTick()
{
	ACXGameStateBase* CXGameState = GetGameState<ACXGameStateBase>();

	const int32 NewRemainingTime = CXGameState->GetRemainingTime() - 1;
	CXGameState->SetRemainingTime(NewRemainingTime);

	if (NewRemainingTime < 1)
	{
		GetWorldTimerManager().ClearTimer(GameTimerHandle);
		StartPlayingState();
	}
}
void ACXGameMode::StartPlayingState()
{
	ACXGameStateBase* CXGameState = GetGameState<ACXGameStateBase>();
	CXGameState->SetGameState(EGameState::Playing);
	CXGameState->SetRemainingTime(30);
	GetWorldTimerManager().SetTimer(GameTimerHandle, this, &ACXGameMode::HandlePlayingTimerTick, 1.0f, true);
}
void ACXGameMode::HandlePlayingTimerTick()
{
	ACXGameStateBase* CXGameState = GetGameState<ACXGameStateBase>();

	const int32 NewRemainingTime = CXGameState->GetRemainingTime() - 1;
	CXGameState->SetRemainingTime(NewRemainingTime);

	if (NewRemainingTime < 1)
	{
		GetWorldTimerManager().ClearTimer(GameTimerHandle);
		FinishGame();
	}
}
void ACXGameMode::FinishGame()
{
	ACXGameStateBase* CXGameState = GetGameState<ACXGameStateBase>();

	int32 HighestCoin = -1;
	TArray<ACXPlayerState*> Winners;

	for (APlayerState* PlayerState : CXGameState->PlayerArray)
	{
		if (ACXPlayerState* CXPlayerState = Cast<ACXPlayerState>(PlayerState))
		{
			const int32 PlayerCoin = CXPlayerState->GetCoins();

			if (HighestCoin < PlayerCoin)
			{
				HighestCoin = PlayerCoin;

				Winners.Empty();
				Winners.Add(CXPlayerState);
			}
			else if (HighestCoin == PlayerCoin)
			{
				Winners.Add(CXPlayerState);
			}
		}
	}

	CXGameState->Winners = Winners;
	CXGameState->SetRemainingTime(0);
	CXGameState->SetGameState(EGameState::Finished);
}

AActor* ACXGameMode::ChoosePlayerStart_Implementation(AController* Player)
{
	TArray<APlayerStart*> AvailablePlayerStarts;

	for (TActorIterator<APlayerStart> It(GetWorld()); It; ++It)
	{
		APlayerStart* PlayerStart = *It;

		if (IsPlayerStartAvailable(PlayerStart))
		{
			AvailablePlayerStarts.Add(PlayerStart);
		}
	}

	checkf(AvailablePlayerStarts.IsEmpty() == false, TEXT("There is no available Vehicle PlayerStart."));

	const int32 RandomIndex = FMath::RandHelper(AvailablePlayerStarts.Num());
	return Cast<AActor>(AvailablePlayerStarts[RandomIndex]);
}

void ACXGameMode::PostLogin(APlayerController* NewPlayer)
{
	if (!IsValid(NewPlayer))
	{
		return;
	}

	if(ACXPlayerController* CXPlayerController = Cast<ACXPlayerController>(NewPlayer))
	{
		if(UChatSubsystem* ChatSubsystem = GetWorld()->GetSubsystem<UChatSubsystem>())
		{
			const TArray<FChatData> ChatLog = ChatSubsystem->GetChatLog();

			if(!ChatLog.IsEmpty()) {
				CXPlayerController->ServerToClient_ChatLog(ChatLog);
			}
		}
	}

	Super::PostLogin(NewPlayer);

	if (bWaitingCountdownStarted)
	{
		StartWaitingCountdown();
	}
}

bool ACXGameMode::IsPlayerStartAvailable(const APlayerStart* PlayerStart) const
{
	if (IsValid(PlayerStart) == false || IsValid(GetWorld()) == false)
	{
		return false;
	}

	const FTransform PlayerStartTransform = PlayerStart->GetActorTransform();
	const FVector CheckLocation = PlayerStartTransform.TransformPosition(VehicleSpawnCheckOffset);
	const FQuat CheckRotation = PlayerStartTransform.GetRotation();
	const FCollisionShape CheckShape = FCollisionShape::MakeBox(VehicleSpawnCheckHalfExtent);
	FCollisionObjectQueryParams ObjectQueryParams;
	ObjectQueryParams.AddObjectTypesToQuery(ECC_Vehicle);

	const FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(VehiclePlayerStartCheck), false);

	const bool bVehicleExists =
		GetWorld()->OverlapAnyTestByObjectType(
			CheckLocation,
			CheckRotation,
			ObjectQueryParams,
			CheckShape,
			QueryParams
		);

	return !bVehicleExists;
}