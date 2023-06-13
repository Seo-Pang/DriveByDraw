// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Monster.h"
#include "Card.h"
#include "Driver.h"
#include "CardField.h"

#include "Action.generated.h"

/**
 *  카드를 사용해서 할 수 있는 모든 액션들을 열거한 액션 클래스입니다.
 *	카드의 Act();를 구현하기 위한 헤더파일입니다.
 */

class UCard;
class AMonster;
class ADriver;
class ACardField;

UENUM(BlueprintType)
enum class ActionType : uint8
{
	Spawn UMETA(DisplayName = "Spawn"),
	Attack UMETA(DisplayName = "Attack"),
	Spped UMETA(DisplayName = "Speed"),
	Not  UMETA(DisplayName = "Not"),
};

UCLASS(Blueprintable)
class DRIVEBYDRAW_API UAction : public UObject
{
	GENERATED_BODY()
		
public:
	//액션의 주인
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ADriver* ActionOwner;
	
	//액션을 야기한 몬스터
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AMonster* CastingMonster;

	//액션의 대상인 몬스터
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AMonster* TargettingMonster;

	//액션이 일어나는 카드필드
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ACardField* ActingField;
		

private:
	
	


	//타겟 몬스터가 데미지를 입는 함수
	void Damage(AMonster* target, int DamageAmount);
public:
	UAction();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "CardType"), BlueprintReadWrite)
	ActionType type;

	//내장된 행동을 실행하는 함수
	UFUNCTION(BlueprintCallable)
		virtual void Act();
	
	UFUNCTION(BlueprintCallable)
		static UAction* SetAction(TSubclassOf<UCard> Card, int Team);
};
