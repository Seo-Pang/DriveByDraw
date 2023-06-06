// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "CardField.generated.h"

UCLASS()
class DRIVEBYDRAW_API ACardField : public AActor
{
	GENERATED_BODY()
	

public:	
	UCard* CardData;

	UPROPERTY(EditAnywhere)
		UCapsuleComponent* MainComponent;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* FieldBody;

	UPROPERTY(EditAnywhere)
		UBoxComponent* MonsterSpawnLocation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Sets default values for this actor's properties
	ACardField();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
