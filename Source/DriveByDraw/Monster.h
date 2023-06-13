// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"

#include "GameFramework/Character.h"
#include "Monster.generated.h"

UCLASS()
class DRIVEBYDRAW_API AMonster : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMonster();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool MyTeam;

	UPROPERTY(EditAnywhere)
		uint8 MonsterID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int AttackDamage;
	

	UFUNCTION(BlueprintCallable ,BlueprintNativeEvent)
		void Attack(AMonster* Target);
	virtual void Attack_Implementation(AMonster* Target);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
