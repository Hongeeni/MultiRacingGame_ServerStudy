#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CXSpeedItem.generated.h"

class USceneComponent;
class USphereComponent;
class UStaticMeshComponent;
class UParticleSystem;
class USoundBase;
class UPrimitiveComponent;

UCLASS()
class CX_API ACXSpeedItem : public AActor
{
	GENERATED_BODY()
	
public:
	ACXSpeedItem();

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(NetMulticast, Reliable)
	void MulticastPickupEffects();

public:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coin")
	TObjectPtr<USceneComponent> SceneRoot;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coin")
	TObjectPtr<USphereComponent> OverlapSphere;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Coin")
	TObjectPtr<UStaticMeshComponent> ItemMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coin")
	TObjectPtr<UParticleSystem> PickupParticle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Coin")
	TObjectPtr<USoundBase> PickupSound;

};
