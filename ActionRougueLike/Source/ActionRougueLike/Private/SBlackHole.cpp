// Fill out your copyright notice in the Description page of Project Settings.


#include "SBlackHole.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMeshActor.h"


ASBlackHole::ASBlackHole()
{
	RadialForce = CreateDefaultSubobject<URadialForceComponent>("RadialForce");
	//prendi la forza e mettila negativa
	RadialForce->ForceStrength = ForceStrength * (-1.0f);
	
	MovementComp->InitialSpeed = 4000.0f;
	
	//
	TimeOfLive = 5.0f;
	ImpulseTime = 1.0f;

	//
	//SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ASBlackHole::OnActorOverlap);
}



void ASBlackHole::BeginPlay()
{
	//assegna un timer e chiama la funzione destory actor
	GetWorldTimerManager().SetTimer(TimerHandle_Delay, this, &ASBlackHole::DistruggiAttore, TimeOfLive);

	//spara l'impulso
	GetWorldTimerManager().SetTimer(TimerHandle_Delay, this, &ASBlackHole::FireImpulse, ImpulseTime, true);


}

void ASBlackHole::FireImpulse()
{
	RadialForce->FireImpulse();
	//lancia la funzione per il check dell'overlap
	
}

void ASBlackHole::OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor && OtherActor != GetInstigator())

		{
						
			if (AStaticMeshActor* StaticMeshActor = Cast<AStaticMeshActor>(OtherActor))

				{
			
				UE_LOG(LogTemp, Warning, TEXT("Cast riuscito"));

				if (StaticMeshActor->GetStaticMeshComponent()->IsSimulatingPhysics())

					{
						//se simula la fisica, distruggilo
					StaticMeshActor->Destroy();
										
					}

				}


		}


}




void ASBlackHole::DistruggiAttore()
{
	//distrugge la skill decorso il tempo indicato
	Destroy();

}
