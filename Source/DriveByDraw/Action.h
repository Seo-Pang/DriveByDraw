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
 *  ī�带 ����ؼ� �� �� �ִ� ��� �׼ǵ��� ������ �׼� Ŭ�����Դϴ�.
 *	ī���� Act();�� �����ϱ� ���� ��������Դϴ�.
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
	//�׼��� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ADriver* ActionOwner;
	
	//�׼��� �߱��� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AMonster* CastingMonster;

	//�׼��� ����� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		AMonster* TargettingMonster;

	//�׼��� �Ͼ�� ī���ʵ�
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ACardField* ActingField;
		

private:
	
	


	//Ÿ�� ���Ͱ� �������� �Դ� �Լ�
	void Damage(AMonster* target, int DamageAmount);
public:
	UAction();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "CardType"), BlueprintReadWrite)
	ActionType type;

	//����� �ൿ�� �����ϴ� �Լ�
	UFUNCTION(BlueprintCallable)
		virtual void Act();
	
	UFUNCTION(BlueprintCallable)
		static UAction* SetAction(TSubclassOf<UCard> Card, int Team);
};
