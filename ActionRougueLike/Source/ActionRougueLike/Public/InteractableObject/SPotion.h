// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableObject/SBaseInteractableObject.h"
#include "SAttributeComponent.h"
#include "SPotion.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROUGUELIKE_API ASPotion : public ASBaseInteractableObject
{
	GENERATED_BODY()

public:

	ASPotion();


protected:
	
	UPROPERTY(EditDefaultsOnly, Category = "Params")
		float PowerOfPotion;


	//gestione del tempo
	FTimerHandle TimerHandle_Delay;

	virtual void BeginPlay() override;
	
	UFUNCTION()
	virtual void Interact_Implementation(APawn* InstigatorPawn);

	UFUNCTION()
		void HandlePotionLogic(USAttributeComponent* AnAttributeComp);

	UFUNCTION()
		void HandlePotionVisibility();


};


