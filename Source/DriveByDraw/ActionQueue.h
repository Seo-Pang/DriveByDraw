// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Action.h"

#include "ActionQueue.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DRIVEBYDRAW_API UActionQueue : public UObject
{
	GENERATED_BODY()
	
public:
	UActionQueue();

	UPROPERTY()
		TArray<UAction*> ActionList;

	UFUNCTION(BlueprintCallable)
		void Enqueue(UAction* Aciton);
	
	UFUNCTION(BlueprintCallable)
		UAction* Dequeue();

	UFUNCTION(BlueprintCallable)
		int GetNumber();

	UFUNCTION(BlueprintCallable)
		static UActionQueue* InitQueue();

	
};
