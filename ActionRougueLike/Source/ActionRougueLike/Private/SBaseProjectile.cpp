// Fill out your copyright notice in the Description page of Project Settings.


#include "SBaseProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

// Sets default values
ASBaseProjectile::ASBaseProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	//SphereComp->SetCollisionProfileName("Projectile");
	//aggiungi l'evento overlap
	SphereComp->OnComponentHit.AddDynamic(this, &ASBaseProjectile::OnActorHit);
	RootComponent = SphereComp;

	EffectComp = CreateDefaultSubobject<UParticleSystemComponent>("EffectComp");
	EffectComp->SetupAttachment(SphereComp);

	MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComp");
	ProjectileMovement = 8000.0f;
	MovementComp->InitialSpeed = ProjectileMovement;
	MovementComp->ProjectileGravityScale = 0.0f;
	MovementComp->bRotationFollowsVelocity = true;
	MovementComp->bInitialVelocityInLocalSpace = true;

	//sound cue
	

}


void ASBaseProjectile::OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	Explode();

}

//implementation è una keyword di unreal se utilizziamo BlueprintNativeEvent
void ASBaseProjectile::Explode_Implementation()
{
	if (ensure(!IsPendingKill()))
		{
	
		//richiede un particlesystem non un particlesystemcomponent!!
		UGameplayStatics::SpawnEmitterAtLocation(this, ImpactVfx, GetActorLocation(), GetActorRotation());
		
		//effettua un suono
		UGameplayStatics::PlaySoundAtLocation(this, SoundProjectile, GetActorLocation(), GetActorRotation());
		 

		Destroy();

		}

}


// Called when the game starts or when spawned
void ASBaseProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASBaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

