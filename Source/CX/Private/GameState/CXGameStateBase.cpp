#include "GameState/CXGameStateBase.h"
#include "Net/UnrealNetwork.h"

void ACXGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, CurrentGameState);
	DOREPLIFETIME(ThisClass, RemainingTime);
	DOREPLIFETIME(ThisClass, Winners);
}

void ACXGameStateBase::SetGameState(EGameState NewGameState)
{
	if (!HasAuthority())
	{
		return;
	}

	CurrentGameState = NewGameState;
}

void ACXGameStateBase::SetRemainingTime(int32 NewRemainingTime)
{
	if (!HasAuthority())
	{
		return;
	}

	RemainingTime = FMath::Max(0, NewRemainingTime);
}

EGameState ACXGameStateBase::GetGameState()
{
	return CurrentGameState;
}

int32 ACXGameStateBase::GetRemainingTime()
{
	return RemainingTime;
}
