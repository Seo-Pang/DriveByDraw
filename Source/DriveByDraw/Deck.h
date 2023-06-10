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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<UCard*> OwnCard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UCard* OneOwnCard;

	//���� �� ���� �ִ� ī�带 �����´�.
	UFUNCTION(BlueprintCallable)
		UCard* Draw();

	//ī�带 ����
	UFUNCTION(BlueprintCallable)
		void Shuffle();

	//�� ����
	UFUNCTION(BlueprintCallable)
		void InitDeck(int CardMaxNumber);
	UDeck();
};
