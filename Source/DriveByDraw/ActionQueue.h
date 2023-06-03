// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Action.h"

#include "ActionQueue.generated.h"

/**
 * 
 */
UCLASS()
class DRIVEBYDRAW_API UActionQueue : public UObject
{
	GENERATED_BODY()
	
public:
	UActionQueue();

	UPROPERTY()
		TArray<UAction*> ActionList;

	UFUNCTION()
		void Enqueue(UAction* Acitonn);
	
	UFUNCTION()
		UAction* Dequeue();

	UFUNCTION()
		int GetNumber();
	
};
