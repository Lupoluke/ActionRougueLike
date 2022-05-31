// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/SAiCharacter.h"
#include "Perception/PawnSensingComponent.h"
//richiesto da linea 31
#include "AIController.h"
//richiesto da linea 37
#include "BehaviorTree/BlackBoardComponent.h"
//richiesto da linea 44
#include "DrawDebugHelpers.h"


// Sets default values
ASAiCharacter::ASAiCharacter()
{
 
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>("PawnSensingComp");

	//assicurati che l'ia ci sia anche in caso di spawn

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

}

void ASAiCharacter::PostInitializeComponents()
{

	Super::PostInitializeComponents();

	PawnSensingComp->OnSeePawn.AddDynamic(this, &ASAiCharacter::OnPawnSeen);

}

void ASAiCharacter::OnPawnSeen(APawn* Pawn)
{

	AAIController* AIC = Cast<AAIController>(GetController());

	if (AIC)

	{

		UBlackboardComponent* BBcomp = AIC->GetBlackboardComponent();

		BBcomp->SetValueAsObject("TargetActor", Pawn);

		DrawDebugString(GetWorld(), GetActorLocation(), "PLAYER SPOTTED", nullptr, FColor::Red, 5.0f, true);

	}


}
