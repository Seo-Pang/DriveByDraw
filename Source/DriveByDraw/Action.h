// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Monster.h"
#include "Action.generated.h"

/**
 *  ī�带 ����ؼ� �� �� �ִ� ��� �׼ǵ��� ������ �׼� Ŭ�����Դϴ�.
 *	ī���� Act();�� �����ϱ� ���� ��������Դϴ�.
 */

UENUM(BlueprintType)
enum ActionType
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
		
private:
	UTexture2D* Icon;
public:
	UPROPERTY(EditAnywhere)
	int HP;
	UFUNCTION(BlueprintCallable)
	void SpawnMonster();
	UFUNCTION(BlueprintCallable)
	void Damage(AMonster* target, float damage);
	
};
