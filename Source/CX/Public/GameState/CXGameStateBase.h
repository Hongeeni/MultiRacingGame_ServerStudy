#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CXGameStateBase.generated.h"

class ACXPlayerState;

UENUM(BlueprintType)
enum class EGameState : uint8
{
	Wating,
	Playing,
	Finished
};

UCLASS()
class CX_API ACXGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void SetGameState(EGameState NewGameState);
	void SetRemainingTime(int32 NewRemainingTime);
	int32 GetRemainingTime();

protected:
	UPROPERTY(Replicated)
	EGameState CurrentGameState = EGameState::Wating;
	UPROPERTY(Replicated)
	int32 RemainingTime = 0;

public:
	UPROPERTY(Replicated)
	TArray<TObjectPtr<ACXPlayerState>> Winners;
};
