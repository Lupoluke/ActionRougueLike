// Fill out your copyright notice in the Description page of Project Settings.


#include "SBlackHole.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/StaticMeshActor.h"


ASBlackHole::ASBlackHole()
{
	
	RadialForce = CreateDefaultSubobject<URadialForceComponent>("RadialForce");
	ForceStrength = -250000.0f;
	RadialForce->ForceStrength = ForceStrength;
	RadialForce->Radius = 2000.0f;
	RadialForce->SetupAttachment(SphereComp);
	
	//
	TimeOfLive = 5.0f;
	ImpulseTime = 1.0f;
	//
	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ASBlackHole::OnOverlapBegin);
	ProjectileMovement = 400.0f;

	//setta a zero il contatore dei cicli
	contatoreTempo = 0.f;

}



void ASBlackHole::BeginPlay()
{

	Super::BeginPlay();

	//spara l'impulso
	GetWorldTimerManager().SetTimer(TimerHandle_Delay, this, &ASBlackHole::SparaImpulso, ImpulseTime, true);

}

void ASBlackHole::SparaImpulso()
{
	UE_LOG(LogTemp, Warning, TEXT("Impulso sparato"));
	
	RadialForce->FireImpulse();
	//lancia la funzione per il check dell'overlap
	contatoreTempo ++;

	UE_LOG(LogTemp, Warning, TEXT ("contatoreTempo è %d"), contatoreTempo);

	if (contatoreTempo> TimeOfLive)

		{
		//distruggi l'attore
	
		DistruggiAttore();
	
		}

}

void ASBlackHole::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	UE_LOG(LogTemp, Warning, TEXT("in funzione  OnComponentBeginOverlap"));
	
	if ( (OtherActor && OtherActor != GetInstigator()) && (OtherComp != nullptr))

		{
				
		AStaticMeshActor* StaticMeshActor = Cast<AStaticMeshActor>(OtherActor);

			if (StaticMeshActor)

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

	UE_LOG(LogTemp, Warning, TEXT("Distruggi Attore"));


	// Reset timer is cleared by using the timer handle
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_Delay);

	//distrugge la skill decorso il tempo indicato
	Destroy();

}
