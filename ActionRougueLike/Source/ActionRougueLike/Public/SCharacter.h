// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class USInteractionComponent;
class UAnimMontage;
class USAttributeComponent;

UCLASS()
class ACTIONROUGUELIKE_API ASCharacter : public ACharacter
{
	GENERATED_BODY()



public:
	// Sets default values for this character's properties
	ASCharacter();

protected:

	//esponi in editor le proprietà di springarmcomponent
	UPROPERTY(VisibleAnywhere)
	
	//Aggiungi lo SpringArmComponent
	USpringArmComponent* SpringArmComp;

	//esponi in editor le proprietà della camera
	UPROPERTY(VisibleAnywhere)

	//Aggiungi la Camera
	UCameraComponent* CameraComp;

	//add the interaction component
	UPROPERTY(VisibleAnywhere, Category = "Component")
	USInteractionComponent* InteractionComp;

	//add l'attribute component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	USAttributeComponent* AttributeComp;


	//projectile class
	UPROPERTY(EditAnywhere, Category = "Attack")
	TSubclassOf<AActor> ProjectileClass;


	//animation
	UPROPERTY(EditAnywhere, Category = "Attack")
	UAnimMontage* AttackAnim;

	//timerHandler
	FTimerHandle TimerHandle_PrimaryAttack;

	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//movement function
	void MoveForward(float Value);
	void MoveRight(float Value);

	//attack function --> triggera un'azione e non richiede parametri in ingresso
	void PrimaryAttack();

	//timer attack function
	void PrimaryAttack_TimeElapsed();


	//interact function
	void PrimaryInteract();



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;




};
