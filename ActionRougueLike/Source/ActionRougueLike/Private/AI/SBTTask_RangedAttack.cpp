// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/SBTTask_RangedAttack.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BlackBoardComponent.h"

EBTNodeResult::Type USBTTask_RangedAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	
	AAIController* MyController = OwnerComp.GetAIOwner();
	
	if (ensure ( MyController ) )

		{
		
		ACharacter* MyPawn = Cast<ACharacter>(MyController->GetPawn());

			if (MyPawn == nullptr)
			
				{
			
				return EBTNodeResult::Failed;
			
				}

			//posizione di partenza del proiettile come pèer il player
			FVector MuzzleLocation = MyPawn->GetMesh()->GetSocketLocation("Muzzle_01");

			//prendi il targetactor
			AActor* TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject("TargetActor"));

			if (TargetActor == nullptr)

				{
					return EBTNodeResult::Failed;
				}


			FVector Direction = TargetActor->GetActorLocation() - MuzzleLocation; /* Direction pointing to world of the Target*/
			FRotator MuzzleRotation = Direction.Rotation();


			FActorSpawnParameters Params;
			Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			AActor* NewProj = GetWorld()->SpawnActor<AActor>(ProjectileClass, MuzzleLocation, MuzzleRotation, Params);

			return NewProj ? EBTNodeResult::Succeeded : EBTNodeResult::Failed;



		}

	//se i valori non sono riportati prima, allora si ritorna falso

	return EBTNodeResult::Failed;

}
