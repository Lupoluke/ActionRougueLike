// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SAiCharacter.generated.h"

//da il pawnsensing all'Ia
class UPawnSensingComponent;


UCLASS()
class ACTIONROUGUELIKE_API ASAiCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASAiCharacter();

protected:

	virtual void PostInitializeComponents() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UPawnSensingComponent* PawnSensingComp;

UFUNCTION()
	void OnPawnSeen(APawn* Pawn);
};
