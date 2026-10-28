#include "CXPlayerState.h"
#include "Net/UnrealNetwork.h"

static int32 GMyTestCoin = 0;
static FAutoConsoleVariableRef CVarAddCoinsServer(
	TEXT("cheat.addcoin.server"),
	GMyTestCoin,
	TEXT("서버에 저장된 코인을 입력한 수치만큼 증가 시킵니다."),
	FConsoleVariableDelegate::CreateLambda([](IConsoleVariable* CVar)
		{
			if (CVar)
			{
				UE_LOG(LogTemp, Warning, TEXT("콘솔 변수 변경됨! 현재 값: %d"), CVar->GetInt());

				if (GWorld->GetFirstPlayerController())
				{
					GWorld->GetFirstPlayerController()->GetPlayerState<ACXPlayerState>()->ClientToServer_AddCoins(GMyTestCoin);
				}
				GMyTestCoin = 0;
			}
		}
	),
	ECVF_Cheat
);
static FAutoConsoleVariableRef CVarAddCoinsClient(
	TEXT("cheat.addcoin.client"),
	GMyTestCoin,
	TEXT("클라이언트에 저장된 코인을 입력한 수치만큼 증가 시킵니다."),
	FConsoleVariableDelegate::CreateLambda([](IConsoleVariable* CVar)
		{
			if (CVar)
			{
				UE_LOG(LogTemp, Warning, TEXT("콘솔 변수 변경됨! 현재 값: %d"), CVar->GetInt());

				if (GWorld->GetFirstPlayerController())
				{
					GWorld->GetFirstPlayerController()->GetPlayerState<ACXPlayerState>()->AddCoins(GMyTestCoin);
				}
				GMyTestCoin = 0;
			}
		}
	),
	ECVF_Cheat
);

void ACXPlayerState::ClientToServer_AddCoins_Implementation(const int32& Amount)
{
	// 서버에서 구동되는 부분
	AddCoins(Amount);
}

void ACXPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ThisClass, Coins, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(ThisClass, BonusMaxSpeed, COND_OwnerOnly);
}

void ACXPlayerState::AddCoins(int32 Amount)
{
	if (HasAuthority() == false || Amount <= 0)
	{
		return;
	}

	Coins += Amount;
}

bool ACXPlayerState::TryRemoveCoins(int32 Amount)
{
	if (HasAuthority() == false || Amount <= 0 || Coins < 5)
	{
		return false;
	}

	Coins -= Amount;
	return true;
}

void ACXPlayerState::AddBonusMaxSpeed(float Amount)
{
	if (HasAuthority() == false || Amount <= 0)
	{
		return;
	}

	BonusMaxSpeed += Amount;
}

FString ACXPlayerState::GetPlayerStateInfo() const
{
	return FString::Printf(TEXT("Coins: %d, BonusMaxSpeed: %.2f"), Coins, BonusMaxSpeed);
}
