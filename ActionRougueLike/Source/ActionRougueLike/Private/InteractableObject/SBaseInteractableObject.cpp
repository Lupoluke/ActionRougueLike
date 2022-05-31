// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObject/SBaseInteractableObject.h"
#include "Components/SphereComponent.h"


// Sets default values
ASBaseInteractableObject::ASBaseInteractableObject()
{
 	
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");
	RootComponent = BaseMesh;
		
	SphereOverlap = CreateDefaultSubobject<USphereComponent>("SphereComp");
	SphereOverlap->SetupAttachment(BaseMesh);
	
	/*
	SphereOverlap->OnComponentBeginOverlap.AddDynamic(this, &ASBaseInteractableObject::OnOverlapBegin);
	*/
	
	//set the time to interact
	TimeToRespawn = 10.0f;


}


// Called when the game starts or when spawned
void ASBaseInteractableObject::BeginPlay()
{
	Super::BeginPlay();
	
}


void ASBaseInteractableObject::Interact_Implementation(APawn* InstigatorPawn)
{

	//logic in derived class

}





