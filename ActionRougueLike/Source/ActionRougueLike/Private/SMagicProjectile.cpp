// Fill out your copyright notice in the Description page of Project Settings.


#include "SMagicProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "SAttributeComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundCue.h"
#include "Camera/CameraShake.h"

// Sets default values
ASMagicProjectile::ASMagicProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	//setta di default le collisioni dell'oggetto-->ovviato creando un nuovo profilo di collisioni
	//SphereComp->SetCollisionObjectType(ECC_WorldDynamic);
	SphereComp->SetCollisionProfileName("Projectile");
	//aggiungi l'evento overlap
	SphereComp->OnComponentBeginOverlap.AddDynamic(this, &ASMagicProjectile::OnActorOverlap);

	RootComponent = SphereComp;

	EffectComp = CreateDefaultSubobject<UParticleSystemComponent>("EffectComp");
	EffectComp->SetupAttachment(SphereComp);

	MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComp");
	MovementComp->InitialSpeed = 1000.0f;
	MovementComp->bRotationFollowsVelocity = true;
	MovementComp->bInitialVelocityInLocalSpace = true;

	//
	SphereComp->SetEnableGravity(false);


	//audio component
	AudioComp = CreateDefaultSubobject<UAudioComponent>("AudioComp");
	//attached al root component
	AudioComp->SetupAttachment(RootComponent);

	//default damage
	ProjectileDamage = 50.0f;


}

void ASMagicProjectile::OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//prendendo a riferimento l'instigator evitiamo collisioni con il player nello spawn del character
	if (OtherActor && OtherActor != GetInstigator())
		{
		//prendi il componente individuato dalla classe
		USAttributeComponent* AttributeComp = Cast<USAttributeComponent> ( OtherActor->GetComponentByClass (USAttributeComponent::StaticClass() ) );

			if (AttributeComp)
			{
				AttributeComp->ApplyHealthChange( GetInstigator(), ProjectileDamage );
				UE_LOG(LogTemp, Warning, TEXT("DANNO APPLICATO %f"), ProjectileDamage);

				//una volta colpito distruggi l'oggetto

				Destroy();

			}

		}


}

// Called when the game starts or when spawned
void ASMagicProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASMagicProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

