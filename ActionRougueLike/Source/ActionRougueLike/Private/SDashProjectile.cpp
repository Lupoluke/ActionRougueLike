// Fill out your copyright notice in the Description page of Project Settings.


#include "SDashProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

ASDashProjectile::ASDashProjectile()
	
	{
		//costruttore di classe
		TeleportDelay = 0.2;
		DetonateDelay = 0.2;
		MovementComp->InitialSpeed = 2000.0f;
	}

void ASDashProjectile::BeginPlay()
	{

	Super::BeginPlay();

	GetWorldTimerManager().SetTimer(TimerHandle_DelayedDetonate, this, &ASDashProjectile::Explode, DetonateDelay);

	}


void ASDashProjectile::Explode_Implementation()
{
	
	//clear the time
	GetWorldTimerManager().ClearTimer(TimerHandle_DelayedDetonate);

	UGameplayStatics::SpawnEmitterAtLocation(this, ImpactVfx, GetActorLocation(), GetActorRotation());

	//disattiva collisioni e componenti
	EffectComp->Deactivate();

	MovementComp->StopMovementImmediately();
	SetActorEnableCollision(false);


	//metti un secondo timer
	FTimerHandle TimerHandle_DelayedTeleport;
	GetWorldTimerManager().SetTimer(TimerHandle_DelayedTeleport, this, &ASDashProjectile::TeleportInstigator, TeleportDelay);

}


void ASDashProjectile::TeleportInstigator()
{

	AActor* ActorToTeleport = GetInstigator();

	if (ActorToTeleport)

		{
		
		ActorToTeleport->TeleportTo(GetActorLocation(), ActorToTeleport->GetActorRotation(), false, false);
	
		}




}





