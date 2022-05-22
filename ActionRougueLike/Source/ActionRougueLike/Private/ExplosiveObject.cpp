// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosiveObject.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "DrawDebugHelpers.h"


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

	//crea l'evento hit --> Suggerito inserirlo nell'event begin play-> ma se lo fai il debug crea problemi
	SM_Object->OnComponentHit.AddDynamic(this, &AExplosiveObject::OnCompHit);
}

// Called when the game starts or when spawned
void AExplosiveObject::BeginPlay()
{
	Super::BeginPlay();
	

	//raccomandato bindare l'evento qui nel begin play che intercorre dopo il construct e il gameplay
	//SM_Object->OnComponentHit.AddDynamic(this, &AExplosiveObject::OnCompHit);


}

void AExplosiveObject::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	ForceImpact->FireImpulse();

	//aggiungi il debug log
	UE_LOG(LogTemp, Log, TEXT("onactor hit explosive barrel"));


	UE_LOG(LogTemp, Warning, TEXT("OtherActor %s, at game time %f"), *GetNameSafe(OtherActor), GetWorld()->TimeSeconds);

	FString CombinedString = FString::Printf(TEXT("Hit at location: %s"), *Hit.ImpactPoint.ToString());

	DrawDebugString(GetWorld(), Hit.ImpactPoint, CombinedString, nullptr, FColor::Green, 2.0f, true);

}

// Called every frame
void AExplosiveObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

