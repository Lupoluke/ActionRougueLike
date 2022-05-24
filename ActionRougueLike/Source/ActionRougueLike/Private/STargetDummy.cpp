// Fill out your copyright notice in the Description page of Project Settings.


#include "STargetDummy.h"
#include "Components/StaticMeshComponent.h"
#include "SAttributeComponent.h"

// Sets default values
ASTargetDummy::ASTargetDummy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>("SphereComp");
	RootComponent = MeshComp;

	AttributeComp = CreateDefaultSubobject<USAttributeComponent>("AttributeComp");
	AttributeComp->OnHealthChanged.AddDynamic(this, &ASTargetDummy::OnHealthChange);

}

// Called when the game starts or when spawned
void ASTargetDummy::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASTargetDummy::OnHealthChange(AActor* InstigateActor, USAttributeComponent* OwningComp, float NewHealth, float Delta)
{
	if (Delta < 0.0f)
	{
		MeshComp->SetScalarParameterValueOnMaterials("TimeToHit", GetWorld()->TimeSeconds);
	}

}

// Called every frame
void ASTargetDummy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

