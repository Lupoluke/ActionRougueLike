// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBaseProjectile.generated.h"


class USphereComponent;
class UProjectileMovementComponent;
class UParticleSystemComponent;

UCLASS()
class ACTIONROUGUELIKE_API ASBaseProjectile : public AActor
{
	GENERATED_BODY()
	

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
		UParticleSystem* ImpactVfx;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Projectile")
		USphereComponent* SphereComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Projectile")
		UProjectileMovementComponent* MovementComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Projectile")
		UParticleSystemComponent* EffectComp;


	UFUNCTION()
		virtual void OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		virtual void OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void Explode();


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	
	// Sets default values for this actor's properties
	ASBaseProjectile();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
};
