// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterClass.h"

// Sets default values
ACharacterClass::ACharacterClass()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACharacterClass::takeDamage()
{
	healthcpp -= 0.05;
}

// Called when the game starts or when spawned
void ACharacterClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

