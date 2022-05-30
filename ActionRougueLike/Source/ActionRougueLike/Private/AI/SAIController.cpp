// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/SAIController.h"
#include "Kismet/GamePlayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"



void ASAIController::BeginPlay()

{

	Super::BeginPlay();
	//da un messaggio di errore in caso di nullptr e dice come correggerlo
	if (ensureMsgf(BehaviorTree, TEXT("Behaviour tree is nullptr! Please Assign BehaviourTree in your AICOntroller")))

	{

		RunBehaviorTree(BehaviorTree);

	}

	//APawn* MyPawn = UGameplayStatics::GetPlayerPawn(this, 0);



	/*

	if (MyPawn)

		{
	
			//il controlle ha accesso diretto al blackboard che è un componente
			//qui prendiamo il valore Vector della posizione tramite nome, che assegniamo nella parentersi
			//richiede l'include  "BehaviorTree/BlackboardComponent.h"
		GetBlackboardComponent()->SetValueAsVector("MoveToLocation", MyPawn->GetActorLocation());
	

		GetBlackboardComponent()->SetValueAsObject("TargetActor", MyPawn);

		}


	*/


}

