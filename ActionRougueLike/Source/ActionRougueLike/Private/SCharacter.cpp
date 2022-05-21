// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "SInteractionComponent.h"


// Sets default values
ASCharacter::ASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp	= CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->bUsePawnControlRotation = true;


	CameraComp		= CreateDefaultSubobject<UCameraComponent>("CameraComp");
	CameraComp->SetupAttachment(SpringArmComp);

	// altra variabile nel character movement --> richiede l'include GameFramework/CharacterMovementComponent.h

	GetCharacterMovement()->bOrientRotationToMovement = true;

	//control rotation yaw
	bUseControllerRotationYaw = false;

	//aggiungi l'interaction component
	InteractionComp = CreateDefaultSubobject<USInteractionComponent>("InteractionComp");

}

// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}



// Called every frame
void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//movimenti
	PlayerInputComponent->BindAxis("MoveForward", this, &ASCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	//Jump
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &ASCharacter::Jump);


	//consenti di sparare un proiettile
	PlayerInputComponent->BindAction("PrimaryAttack", EInputEvent::IE_Pressed, this, &ASCharacter::PrimaryAttack);

	//interazione del personaggio
	PlayerInputComponent->BindAction("PrimaryInteraction", EInputEvent::IE_Pressed, this, &ASCharacter::PrimaryInteract);

	}

void ASCharacter::MoveForward(float Value)
{

	//prendi il rifeirmento alla rotazione del controller

	FRotator ControlRot = GetControlRotation();

	//siccome siamo interessati solo al Yaw -> setta a zero il pitch e il roll

	ControlRot.Pitch= 0.0f;
	ControlRot.Roll = 0.0f;

	AddMovementInput(ControlRot.Vector(), Value);

}


void ASCharacter::MoveRight(float Value)
{
	
	FRotator ControlRot = GetControlRotation();

	//siccome siamo interessati solo al Yaw -> setta a zero il pitch e il roll
	ControlRot.Pitch = 0.0f;
	ControlRot.Roll = 0.0f;
	
	// X = Forward
	// Y = Right
	// Z = UpDown

	FVector RightVector = FRotationMatrix(ControlRot).GetScaledAxis(EAxis::Y);

	AddMovementInput(RightVector, Value);

}

void ASCharacter::PrimaryAttack()
{

	FVector HandLocation = GetMesh()->GetSocketLocation("Muzzle_01");


	FTransform SpawnTM = FTransform(GetControlRotation(), HandLocation);
	

	FActorSpawnParameters SpawnParams;

	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	//spawn an object passa attraverso il World
	GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTM, SpawnParams);

}

void ASCharacter::PrimaryInteract()
{

	//chiama la funzione che è direttamente inserita nel component
	InteractionComp->PrimaryInteract();

}



