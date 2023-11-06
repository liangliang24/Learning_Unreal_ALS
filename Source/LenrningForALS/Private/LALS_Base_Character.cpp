// Fill out your copyright notice in the Description page of Project Settings.



#include "LenrningForALS/Public/LALS_Base_Character.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ALALS_Base_Character::ALALS_Base_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


// Called when the game starts or when spawned
void ALALS_Base_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALALS_Base_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALALS_Base_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

