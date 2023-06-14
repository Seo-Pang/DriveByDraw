// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Action.h"
#include "ActionSpawn.generated.h"

/**
 * 
 */
UCLASS()
class DRIVEBYDRAW_API UActionSpawn : public UAction
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<AMonster> MonsterSet;

	UActionSpawn();

		void Act() override;

	UFUNCTION(BlueprintCallable)
		void SpawnMonster();

	UFUNCTION(BlueprintCallable)
		void AddAttackCard();

};
