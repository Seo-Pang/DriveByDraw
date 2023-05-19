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

	//���� �� ���� �ִ� ī�带 �����´�.
	UFUNCTION()
		UCard* Draw();

	//ī�带 ����
	UFUNCTION()
		void Shuffle();

	//�� ����
	UFUNCTION()
		void InitDeck();
	UDeck();
};
