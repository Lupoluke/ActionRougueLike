// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/SAiCharacter.h"
#include "Perception/PawnSensingComponent.h"
//richiesto da linea 31
#include "AIController.h"
//richiesto da linea 37
#include "BehaviorTree/BlackBoardComponent.h"
//richiesto da linea 44
#include "DrawDebugHelpers.h"
#include "SAttributeComponent.h"
#include "BrainComponent.h"

// Sets default values
ASAiCharacter::ASAiCharacter()
{
 
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>("PawnSensingComp");

	//assicurati che l'ia ci sia anche in caso di spawn
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	//aggiungi l'attribute component
	AttributeComp = CreateDefaultSubobject<USAttributeComponent>("AttributeComp");


}

void ASAiCharacter::PostInitializeComponents()
{

	Super::PostInitializeComponents();

	PawnSensingComp->OnSeePawn.AddDynamic(this, &ASAiCharacter::OnPawnSeen);

	AttributeComp->OnHealthChanged.AddDynamic(this, &ASAiCharacter::OnHealthChange);


}

void ASAiCharacter::OnHealthChange(AActor* InstigateActor, USAttributeComponent* OwningComp, float NewHealth, float Delta)
{
	if (Delta<0.0f)

	{

		//qui evitiamo che il bot danneggi se stesso ma se è un altro bot il target è settato l'altro bot.
		if (InstigateActor != this)

		{
			SetTargetActor(InstigateActor);
		}

	
		if (NewHealth <= 0.0f)

			{
				//stop blackboard-> stop logic

			AAIController* Aic = Cast<AAIController>(GetController());

					if (Aic)

					{
				
						Aic->GetBrainComponent()->StopLogic("Killed");
				
					}


				//ragdoll
					GetMesh()->SetAllBodiesSimulatePhysics(true);
					GetMesh()->SetCollisionProfileName("Ragdoll");

				//set life spawn
				SetLifeSpan(10.0f);
		
			}


	}

}

void ASAiCharacter::SetTargetActor(AActor* NewTarget)
{

	AAIController* AIC = Cast<AAIController>(GetController());

	if (AIC)

		{
		
		AIC->GetBlackboardComponent()->SetValueAsObject("TargetActor", NewTarget);

		}



}

void ASAiCharacter::OnPawnSeen(APawn* Pawn)
{

	
	SetTargetActor(Pawn);


	DrawDebugString(GetWorld(), GetActorLocation(), "PLAYER SPOTTED", nullptr, FColor::Red, 5.0f, true);

	

}
