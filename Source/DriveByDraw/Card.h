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

	//카드 이미지
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* image;

	//카드에 들어갈 액션 데이터
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UAction> ActionData;

	//카드에 지정된 몬스터
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<AMonster> CardMonster;

	//카드가 해당 몬스터로부터 생겨났을 경우 그 대상을 가리킴
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AMonster* CastMonster;

	//카드 종류를 반환합니다.
	UFUNCTION(BlueprintCallable)
		virtual CardType GetType();

	UCard();

	//얘는 카드 세팅하는 건데 점점 필요없을지도 모른다.
	UFUNCTION(BlueprintCallable)
	static UCard* SetCard(int CardID);
};