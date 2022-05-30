// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SGameplayInterface.h"
#include "SBaseInteractableObject.generated.h"


class UStaticMeshComponent;
class USphereComponent;

UCLASS()
class ACTIONROUGUELIKE_API ASBaseInteractableObject : public AActor, public ISGameplayInterface
{
	GENERATED_BODY()
	
		/*implementa l'interfaccia d'interazione*/
		void Interact_Implementation(APawn* InstigatorPawn);

public:	
	// Sets default values for this actor's properties
	ASBaseInteractableObject();

protected:

	UPROPERTY (EditDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
		float TimeToRespawn;

	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
		USphereComponent* SphereOverlap;

	UFUNCTION()
		//void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
