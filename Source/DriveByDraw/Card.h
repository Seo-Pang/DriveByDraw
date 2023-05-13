// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Card.generated.h"
/**
 */
 
UENUM(BlueprintType)
enum class CardType : uint8
{
	Card UMETA(DisplayName = "Card"),
	MonsterCard UMETA(DisplayName = "MonsterCard"),
	SpeedCard UMETA(DisplayName = "SpeedCard"),
	AttackCard UMETA(DisplayName = "AttackCard"),
};

UCLASS(Blueprintable)
class DRIVEBYDRAW_API UCard : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 id;
	UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "CardType"), BlueprintReadWrite)
	CardType type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 cost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* image;

	//ī�带 ����մϴ�. ���� ī�尡 ���������� ���Ǿ��ٸ� true�� ��ȯ�մϴ�.
	UFUNCTION()
	virtual bool UseCard();
	
	//ī�� ������ ��ȯ�մϴ�.
	UFUNCTION()
	virtual CardType GetType();

	UCard();
};

