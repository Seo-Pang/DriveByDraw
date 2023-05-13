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

	//카드를 사용합니다. 만약 카드가 정상적으로 사용되었다면 true를 반환합니다.
	UFUNCTION()
	virtual bool UseCard();
	
	//카드 종류를 반환합니다.
	UFUNCTION()
	virtual CardType GetType();

	UCard();
};

