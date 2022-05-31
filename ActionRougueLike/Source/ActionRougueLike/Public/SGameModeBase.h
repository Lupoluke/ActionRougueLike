// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "SGameModeBase.generated.h"


class UEnvQuery;
class UEnvQueryInstanceBlueprintWrapper;
class UCurveFloat;
/**
 * 
 */
UCLASS()
class ACTIONROUGUELIKE_API ASGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:

//timerHandler
	FTimerHandle TimerHandle_SpawnBots;

//query system
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UEnvQuery* SpawnBotQuery;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
		float SpawnTimerInterval;
	
	//curve float
	UPROPERTY(EditDefaultsOnly, Category = "AI")
	 UCurveFloat* DifficultyCurve;


	UPROPERTY(EditDefaultsOnly, Category = "AI")
		TSubclassOf<AActor> MinionClass;

	UFUNCTION()
		void SpawnBotTimerElapsed();

	UFUNCTION()
		void OnQueryCompleted(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus);

	

public:

	ASGameModeBase();

		//gamemode chiama i singoli beginplay così non ha beginplay cme funzione ma solo StartPlay()
		virtual void StartPlay() override;

};
