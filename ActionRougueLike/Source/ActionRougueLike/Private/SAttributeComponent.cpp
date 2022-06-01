// Fill out your copyright notice in the Description page of Project Settings.


#include "SAttributeComponent.h"
#include "Kismet/KismetSystemLibrary.h"


// Sets default values for this component's properties
USAttributeComponent::USAttributeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


	Health = 100.0f;

	MaxHealth = 120.0f;

	// ...
}


// Called when the game starts
void USAttributeComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


float USAttributeComponent::GetHealth() const
{
	return Health;
}

float USAttributeComponent::GetMaxHealth() const
{
	return MaxHealth;
}

void USAttributeComponent::SetHealth(float NewHealth)
{
	Health = NewHealth;
}

// Called every frame
void USAttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool USAttributeComponent::isAlive() const
{
	return (Health > 0.0f);
}

bool USAttributeComponent::ApplyHealthChange(AActor* InstigatorActor, float Delta)
{

	AActor* ActorOwner = this->GetOwner();
	FString ActorOwnerName = ActorOwner->GetName();

	float OldHealth = Health;

	//Health = FMath::Clamp(Health+Delta, 0.0f, MaxHealth);
	Health = FMath::Clamp(Health-Delta, 0.0f, MaxHealth);

	// old	Health += Delta;
	float ActualDelta = Health - OldHealth;

	//setta la nuova salute
	SetHealth(Health);

	//lancia un evento
	//OnHealthChanged.Broadcast(nullptr, this, Health, Delta); //old
	OnHealthChanged.Broadcast(InstigatorActor, this, Health, ActualDelta);
	
	UE_LOG(LogTemp, Warning, TEXT("SALUTE E' %f"), Health);
	UE_LOG(LogTemp, Warning, TEXT("Soggetto è %s"), *ActorOwnerName);

	return ActualDelta != 0;

}

USAttributeComponent* USAttributeComponent::GetAttributes(AActor* FromActor)
{

	if (FromActor)

		{
	
		return Cast<USAttributeComponent>(FromActor->GetComponentByClass(USAttributeComponent::StaticClass()));


		}

	return nullptr;
}

bool USAttributeComponent::IsActorAlive(AActor* Actor)
{

	USAttributeComponent* AttributeComp = GetAttributes(Actor);

	if (AttributeComp)
		{
		return AttributeComp->isAlive();
		}

	return false;
}

