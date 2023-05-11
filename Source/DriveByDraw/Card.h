// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Card.generated.h"
/**
 * 
 */
enum class CardType : uint8
{
	Card UMETA(DisplayName = "Card"),
	MonsterCard UMETA(DisplayName = "MonsterCard"),
	SpeedCard UMETA(DisplayName = "SpeedCard"),
	AttackCard UMETA(DisplayName = "AttackCard"),
};

UCLASS()
class DRIVEBYDRAW_API UCard : public UObject
{
	GENERATED_BODY()
private:
	uint8 id;
	FString name;
	uint8 cost;
	UTexture2D* image;

public:
	//카드를 사용합니다. 만약 카드가 정상적으로 사용되었다면 true를 반환합니다.
	virtual bool UseCard();
	
	//카드 종류를 반환합니다.
	virtual CardType GetType();

	UCard();
};

