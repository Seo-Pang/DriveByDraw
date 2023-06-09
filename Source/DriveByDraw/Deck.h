// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Card.h"
#include "Deck.generated.h"


/**
 * 
 */
UCLASS(Blueprintable)
class DRIVEBYDRAW_API UDeck : public UObject
{
	GENERATED_BODY()

private:
	int32 DrawIndex{};

public:

	//덱에 총 들어갈 카드
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSubclassOf<UCard>> Cards;

	//게임 진행중 남은 카드
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UCard*> OwnCard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UCard* OneOwnCard;

	//덱에 맨 위에 있는 카드를 가져온다.
	UFUNCTION(BlueprintCallable)
		UCard* Draw();

	//카드를 셔플
	UFUNCTION(BlueprintCallable)
		void Shuffle();

	//덱 세팅
	UFUNCTION(BlueprintCallable)
		void InitDeck();

	UDeck();
};
