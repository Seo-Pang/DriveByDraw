// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Card.h"
#include "SpeedCard.generated.h"

/**
 * 
 */
UCLASS()
class DRIVEBYDRAW_API USpeedCard : public UCard
{
	GENERATED_BODY()

public:
	CardType GetType() override;
	
};
