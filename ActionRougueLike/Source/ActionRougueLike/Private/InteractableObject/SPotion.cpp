// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableObject/SPotion.h"
#include "Kismet/GameplayStatics.h"
#include "SAttributeComponent.h"


//costruttore
ASPotion::ASPotion()

{

	PowerOfPotion = 10.f;

}

void ASPotion::BeginPlay()
{

	Super::BeginPlay();
	


}

void ASPotion::Interact_Implementation(APawn* InstigatorPawn)
{

	//hide the base mesh
	if (BaseMesh)
	{
		BaseMesh->SetHiddenInGame(true);
		BaseMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		//add a timer to show the potion again
		GetWorldTimerManager().SetTimer(TimerHandle_Delay, this, &ASPotion::HandlePotionVisibility, TimeToRespawn, false);
	}

	 
	USAttributeComponent* AttributeComp = Cast<USAttributeComponent>(InstigatorPawn->GetComponentByClass(USAttributeComponent::StaticClass()));
				
			if (AttributeComp)
				{
				HandlePotionLogic(AttributeComp);
				}
	
}

void ASPotion::HandlePotionLogic(USAttributeComponent* AnAttributeComp)
{
	if (AnAttributeComp)
	{
		float PlayerHealth = AnAttributeComp->GetHealth();
		float PlayerMaxHealth = AnAttributeComp->GetMaxHealth();
		//logica della pozione

		(PlayerHealth + PowerOfPotion >= PlayerMaxHealth) ? AnAttributeComp->SetHealth(PlayerMaxHealth) 
														  : AnAttributeComp->SetHealth(PlayerHealth + PowerOfPotion);

	}

}

void ASPotion::HandlePotionVisibility()
{

	BaseMesh->SetHiddenInGame(false);
	BaseMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

}
