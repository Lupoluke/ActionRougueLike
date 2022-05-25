// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Particles/ParticleSystem.h"
#include "SBaseProjectile.h"
#include "SDashProjectile.generated.h"


/**
 * 
 */
UCLASS()
class ACTIONROUGUELIKE_API ASDashProjectile : public ASBaseProjectile
{
	GENERATED_BODY()
	

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Teleport Params")
		float TeleportDelay;

	UPROPERTY(EditDefaultsOnly, Category = "Teleport Params")
		float DetonateDelay;

	//handle per cancellare il tempo quando colpiamo qualcosa
	FTimerHandle TimerHandle_DelayedDetonate;

	virtual void Explode_Implementation();

	void TeleportInstigator();

	//riscrivi nella classe figlia la funzione della classe madre
	virtual void BeginPlay() override;

public:

	ASDashProjectile();

};
