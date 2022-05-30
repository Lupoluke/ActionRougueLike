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


	//aggiungi un contatore per uscire dal loop del ciclo
	int contatoreTempo;

	//abbiamo bisogno della gestione di un Timer
	FTimerHandle TimerHandle_Delay;

	UFUNCTION()
		void DistruggiAttore();
	
	UFUNCTION(BlueprintCallable)
		void SparaImpulso();

	
	UFUNCTION(BlueprintCallable)
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	virtual void BeginPlay() override;
	
	

public:

	ASBlackHole();

};
