// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosiveObject.h"
#include "PhysicsEngine/RadialForceComponent.h"


// Sets default values
AExplosiveObject::AExplosiveObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_Object = CreateDefaultSubobject<UStaticMeshComponent>("Object");
	SM_Object->SetSimulatePhysics(true);
	
	RootComponent = SM_Object;

	//crea il radialforce
	ForceImpact = CreateDefaultSubobject<URadialForceComponent>("RadialForce");
	ForceImpact->SetupAttachment(SM_Object);

	//devi aggiungere un nuovo canale: non considera i world dynamics
	ForceImpact->AddCollisionChannelToAffect(ECollisionChannel::ECC_WorldDynamic);

	//crea l'evento hit --> Suggerito inserirlo nell'event begin play
	//SM_Object->OnComponentHit.AddDynamic(this, &AExplosiveObject::OnCompHit);
}

// Called when the game starts or when spawned
void AExplosiveObject::BeginPlay()
{
	Super::BeginPlay();
	

	//raccomandato bindare l'evento qui nel begin play che intercorre dopo il construct e il gameplay
	SM_Object->OnComponentHit.AddDynamic(this, &AExplosiveObject::OnCompHit);


}

void AExplosiveObject::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	ForceImpact->FireImpulse();
}

// Called every frame
void AExplosiveObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

