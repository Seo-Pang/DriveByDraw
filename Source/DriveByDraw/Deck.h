// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Card.h"
#include "Deck.generated.h"


/**
 * 
 */
UCLASS()
class DRIVEBYDRAW_API UDeck : public UObject
{
	GENERATED_BODY()

private:
	TArray<UCard*> OwnCard;

public:

	//덱에 맨 위에 있는 카드를 가져온다.
	UFUNCTION()
		UCard* Draw();

	//카드를 셔플
	UFUNCTION()
		void Shuffle();

	//덱 세팅
	UFUNCTION()
		void InitDeck();
	UDeck();
};
