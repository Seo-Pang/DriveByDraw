// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Action.h"
#include "Card.h"
#include "Monster.h"
#include "Driver.h"

#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "CardField.generated.h"

class ADriver;
class AMonster;


UCLASS()
class DRIVEBYDRAW_API ACardField : public AActor
{
	GENERATED_BODY()
	

public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UCard* CardData;

	UPROPERTY(EditAnywhere)
		UCapsuleComponent* MainComponent;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* FieldBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UBoxComponent* MonsterSpawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ADriver* FieldOwner;


	//필드 위에 소환된 몬스터
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AMonster* SettingMonster;

	UFUNCTION(BlueprintCallable)
		AMonster* SpawnMonster(UCard* Card);

	//카드를 필드에 드래그했을 경우 상호작용. 성공했으면 true를 반환, 실패하면 false를 반환
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		bool DragOnCard(UCard* DragCard);

	virtual bool DragOnCard_Implementation(UCard* DragCard);
	
	
		
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Sets default values for this actor's properties
	ACardField();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
