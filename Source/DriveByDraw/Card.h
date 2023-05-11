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
	//ī�带 ����մϴ�. ���� ī�尡 ���������� ���Ǿ��ٸ� true�� ��ȯ�մϴ�.
	virtual bool UseCard();
	
	//ī�� ������ ��ȯ�մϴ�.
	virtual CardType GetType();

	UCard();
};

