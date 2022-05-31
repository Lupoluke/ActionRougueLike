// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "SInteractionComponent.h"
#include "SAttributeComponent.h"
#include "Kismet/GameplayStatics.h"


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

	//sockets;
	HandSocketName = "Muzzle_01";

	//components

	//aggiungi l'interaction component
	InteractionComp = CreateDefaultSubobject<USInteractionComponent>("InteractionComp");

	//aggiungi l'attribute component
	AttributeComp = CreateDefaultSubobject<USAttributeComponent>("AttributeComp");

}


void ASCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	AttributeComp->OnHealthChanged.AddDynamic(this, &ASCharacter::OnHealthChange);

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
	//play un'animazione
	PlayAnimMontage(AttackAnim);
	//crea un timer --> dopo 1 secondo il timer lancerà la funzione primaryattack...
	GetWorldTimerManager().SetTimer(TimerHandle_PrimaryAttack, this, &ASCharacter::PrimaryAttack_TimeElapsed, 0.1f);
	//se il giocatore muore interrompi il timer--> timer è la variabile timerhandle_PrimaryAttack
	//GetWorldTimerManager().ClearTimer(TimerHandle_PrimaryAttack);

	//spawn un effetto al lancio
	UGameplayStatics::SpawnEmitterAttached(CastingEffect, GetMesh(), HandSocketName, FVector::ZeroVector, FRotator::ZeroRotator,EAttachLocation::SnapToTarget);


}

void ASCharacter::PrimaryAttack_TimeElapsed()
{
		//ensure viene eseguito una sola volta; ensurealways sempre (ensure and ensure always non corrono su shipped build); check blocca l'intero engine
	if ( (ProjectileClass) )

		{

		FVector HandLocation = ( GetMesh()->GetSocketLocation(HandSocketName) ) + ProjectileOffset;
		FTransform SpawnTM = FTransform(GetControlRotation(), HandLocation );
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		SpawnParams.Instigator = this;
		//spawn an object passa attraverso il World
		GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTM, SpawnParams);
		
		/* assignment 2 non funziona
		FVector HandLocation = GetMesh()->GetSocketLocation("Muzzle_01");
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		//crea un instigator
		SpawnParams.Instigator = this;

		//Crea una sfera
		FCollisionShape Shape;
		Shape.SetSphere(20.0f);

		//Ignora il giocatore
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(this);

		FCollisionObjectQueryParams ObjParams;
		ObjParams.AddObjectTypesToQuery(ECC_WorldDynamic);
		ObjParams.AddObjectTypesToQuery(ECC_WorldStatic);
		ObjParams.AddObjectTypesToQuery(ECC_Pawn);

		FVector TraceStart = CameraComp->GetComponentLocation();
		FVector TraceEnd = CameraComp->GetComponentLocation() + (GetControlRotation().Vector() * 5000);

		FHitResult Hit;
		//return true with a blocking hit
		if (GetWorld()->SweepSingleByObjectType(Hit, TraceStart, TraceEnd, FQuat::Identity, ObjParams, Shape, Params))
		{
			//overwrite traceend with impact point on world
			TraceEnd = Hit.ImpactPoint;
		}
		
		//fai una nuova direzione rotazione dalla mano e punta al centro impatto
		FRotator ProjRotation = FRotationMatrix::MakeFromX(TraceEnd - HandLocation).Rotator();

		//dai le coordinate dello spawn
		FTransform SpawnTM = FTransform(ProjRotation, HandLocation);

		//spawn an object passa attraverso il World
		GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTM, SpawnParams);
	
		*/

		}


}

void ASCharacter::PrimaryInteract()
{

	//chiama la funzione che è direttamente inserita nel component
	InteractionComp->PrimaryInteract();

}

void ASCharacter::OnHealthChange(AActor* InstigateActor, USAttributeComponent* OwningComp, float NewHealth, float Delta)
{
	if (NewHealth<= 0.0f  /* && Delta<0.0f */)

		{
		APlayerController* Pc = Cast<APlayerController>(GetController());
		DisableInput(Pc);
		}

}

