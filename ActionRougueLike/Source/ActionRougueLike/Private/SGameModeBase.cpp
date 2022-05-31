// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameModeBase.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "AI/SAiCharacter.h"
#include "SAttributeComponent.h"
//Tactoriterator è stipato in Engine Utils
#include "EngineUtils.h"


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
	
	
	int32 NrOfAliveBots = 0;

	//for iterator -->più efficiente del get all class

	for (TActorIterator<ASAiCharacter> It(GetWorld()); It; ++It)

	{
		ASAiCharacter* Bot = *It;

		USAttributeComponent* AttributeComp = Cast<USAttributeComponent>(Bot->GetComponentByClass(USAttributeComponent::StaticClass()));

		if (AttributeComp && AttributeComp->isAlive())

			{
			NrOfAliveBots++;
			}

	}
	
	
	//max bot
	float MaxBotCount = 10.0f;
	
	//specifica la difficoltà se abbiamo una curva nel gamemode e in caso affermativo sovrascrivi il valore

	if (DifficultyCurve)

	{
		MaxBotCount = DifficultyCurve->GetFloatValue(GetWorld()->TimeSeconds);

	}


	if (NrOfAliveBots>MaxBotCount)
		{
		return;
		}


			
	//da il resultato dell'eqs
	TArray<FVector> Locations = QueryInstance->GetResultsAsLocations();

	//controlla se ci sono valide locazioni
	if (Locations.IsValidIndex(0))
		{
			
			//spawn
		GetWorld()->SpawnActor<AActor>(MinionClass, Locations[0], FRotator::ZeroRotator);


		}


}

