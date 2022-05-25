// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SBaseProjectile.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "SBlackHole.generated.h"


/**
 * 
 */
UCLASS()
class ACTIONROUGUELIKE_API ASBlackHole : public ASBaseProjectile
{
	GENERATED_BODY()


protected:
		
	UPROPERTY (EditDefaultsOnly, Category = "Components")
	class URadialForceComponent* RadialForce;

	UPROPERTY(EditDefaultsOnly, Category = "BlackHole Params")
	float ForceStrength;

	UPROPERTY(EditDefaultsOnly, Category = "BlackHole Params")
		float TimeOfLive;

	UPROPERTY(EditDefaultsOnly, Category = "BlackHole Params")
		float ImpulseTime;


	//abbiamo bisogno della gestione di un Timer
	FTimerHandle TimerHandle_Delay;

	UFUNCTION()
		void DistruggiAttore();
	
	UFUNCTION(BlueprintCallable)
		void FireImpulse();

	//UFUNCTION(BlueprintCallable, Category = "Function BlackHole")
	void OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	virtual void BeginPlay() override;
	
	

public:

	ASBlackHole();

};
