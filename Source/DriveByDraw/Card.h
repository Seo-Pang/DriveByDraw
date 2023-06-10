// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Monster.h"
#include "Action.h"
#include "Card.generated.h"
/**
 */

class AMonster;
class UAction;

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UAction> Action;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AMonster* Monster;


	//ī�带 ����� �� ī���� ����� �ִ� �Լ��Դϴ�(�׼� ť�� ���������� �� �Լ�)
	UFUNCTION(BlueprintCallable)
		virtual void Act();

	//ī�� ������ ��ȯ�մϴ�.
	UFUNCTION(BlueprintCallable)
		virtual CardType GetType();

	UCard();
	UFUNCTION(BlueprintCallable)
	static UCard* SetCard(int CardID);
};