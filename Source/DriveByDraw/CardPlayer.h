// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Card.h"
#include "CardPlayer.generated.h"


/**
 * 
 */
UCLASS(Blueprintable)
class DRIVEBYDRAW_API UCardPlayer : public UObject
{
	GENERATED_BODY()
		
private:
	TArray<UCard> deck;

public:
	
	
};
