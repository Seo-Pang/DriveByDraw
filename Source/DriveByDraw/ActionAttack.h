// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Action.h"
#include "ActionAttack.generated.h"

/**
 * 
 */
UCLASS()
class DRIVEBYDRAW_API UActionAttack : public UAction
{
	GENERATED_BODY()
public:
	void Act() override;

	UFUNCTION(BlueprintCallable)
		void Attack(AMonster* Caster, AMonster* Target);
	
};
