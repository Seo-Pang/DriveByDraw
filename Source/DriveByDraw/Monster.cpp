// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster.h"

// Sets default values
AMonster::AMonster()
{
	HP = 0;
	MonsterID = 0;
	AttackDamage = 0;
	Scale = 0;
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AMonster::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMonster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AMonster::Attack_Implementation(AMonster* Target)
{
	if (Target->HP > 0)
	{
		Target->HP -= AttackDamage;
	}

}

void AMonster::AttackDriver_Implementation(ADriver* Target)
{
	if (Target->HP > 0)
	{
		Target->HP -= AttackDamage;
	}

	if (Target->HP <= 0)
	{
		Die();
	}
}

void AMonster::Die()
{
	this->Destroy();
}