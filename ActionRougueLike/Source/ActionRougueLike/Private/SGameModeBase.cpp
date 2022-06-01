// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameModeBase.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "AI/SAiCharacter.h"
#include "SAttributeComponent.h"
//Tactoriterator è stipato in Engine Utils
#include "EngineUtils.h"
#include "DrawDebugHelpers.h"


ASGameModeBase::ASGameModeBase()
{
	SpawnTimerInterval = 2.0f;
}



void ASGameModeBase::StartPlay()
{

	Super::StartPlay();

	GetWorldTimerManager().SetTimer(TimerHandle_SpawnBots, this, &ASGameModeBase::SpawnBotTimerElapsed, SpawnTimerInterval, true);

}


void ASGameModeBase::SpawnBotTimerElapsed()
{
	int32 NrOfAliveBots = 0;

	//for iterator -->più efficiente del get all class
		//TActorIterator<ASAiCharacter> -> grab every instance of a particular class in a level
		//
	for (TActorIterator<ASAiCharacter> It(GetWorld()); It; ++It)

	{
		ASAiCharacter* Bot = *It;

		//chiamiamo la static class nell'attribute component
		USAttributeComponent* AttributeComp = USAttributeComponent::GetAttributes(Bot);

		if (AttributeComp && AttributeComp->isAlive())

		{
			NrOfAliveBots++;
		}

	}


	UE_LOG(LogTemp, Log, TEXT("Found %1 alive bots"), NrOfAliveBots)

		//max bot
		float MaxBotCount = 10.0f;

	//specifica la difficoltà se abbiamo una curva nel gamemode e in caso affermativo sovrascrivi il valore

	if (DifficultyCurve)

	{
		MaxBotCount = DifficultyCurve->GetFloatValue(GetWorld()->TimeSeconds);

	}


	if (NrOfAliveBots > MaxBotCount)
	{

		UE_LOG(LogTemp, Log, TEXT("Max Capacity Bots"), NrOfAliveBots)

			return;
	}


	//qui utilizziamo l'eqs
	UEnvQueryInstanceBlueprintWrapper* QueryInstance = UEnvQueryManager::RunEQSQuery(this, SpawnBotQuery, this, EEnvQueryRunMode::RandomBest5Pct, nullptr);

	if (ensure(QueryInstance))
	{ 
	QueryInstance->GetOnQueryFinishedEvent().AddDynamic(this, &ASGameModeBase::OnQueryCompleted);
	}

}

void ASGameModeBase::OnQueryCompleted(UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus)
{

	//verifica il querystatus
	if (QueryStatus != EEnvQueryStatus::Success)
	{
		UE_LOG(LogTemp, Warning, TEXT("SpawnBot Eqs QueryFailed"));
		return;
	}
	
	
	

			
	//da il resultato dell'eqs
	TArray<FVector> Locations = QueryInstance->GetResultsAsLocations();

	//controlla se ci sono valide locazioni
	if (Locations.IsValidIndex(0))
		{
			
			//spawn
		GetWorld()->SpawnActor<AActor>(MinionClass, Locations[0], FRotator::ZeroRotator);

		//debug purpose
		DrawDebugSphere(GetWorld(), Locations[0], 50.0f, 20, FColor::Blue, false, 60.0f);
		}


}

