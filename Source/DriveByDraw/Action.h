// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Monster.h"
#include "Card.h"
#include "Driver.h"

#include "Action.generated.h"

/**
 *  카드를 사용해서 할 수 있는 모든 액션들을 열거한 액션 클래스입니다.
 *	카드의 Act();를 구현하기 위한 헤더파일입니다.
 */

class UCard;
class AMonster;
class ADriver;

UENUM(BlueprintType)
enum class ActionType : uint8
{
	Spawn UMETA(DisplayName = "Spawn"),
	Attack UMETA(DisplayName = "Attack"),
	Magic UMETA(DisplayName = "Magic"),
	Not  UMETA(DisplayName = "Not"),
};

UCLASS(Blueprintable)
class DRIVEBYDRAW_API UAction : public UObject
{
	GENERATED_BODY()
		
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ADriver* ActionOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool hasMonster;

private:
	void SpawnMonster();
	void Damage(AMonster* target, float damage);
public:
	UAction();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "CardType"), BlueprintReadWrite)
	ActionType type;
	
	UFUNCTION(BlueprintCallable)
		static UAction* SetAction(UCard* Card, int Team);
};
