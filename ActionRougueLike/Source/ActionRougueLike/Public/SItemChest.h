// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SGameplayInterface.h"
#include "SItemChest.generated.h"

class UStaticMeshComponent;

UCLASS()
class ACTIONROUGUELIKE_API ASItemChest : public AActor, public ISGameplayInterface
{
	GENERATED_BODY()

		//codice imposto perch� nella classe dell'interfaccia abbiamo usato UFUNCTION(BlueprintNativeEvent)

		void Interact_Implementation(APawn* InstigatorPawn);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SecondMesh;



public:	
	// Sets default values for this actor's properties
	ASItemChest();


	UPROPERTY(EditAnywhere)
		float TargetPitch;


	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
