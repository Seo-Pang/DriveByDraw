// Fill out your copyright notice in the Description page of Project Settings.


#include "Action.h"

UAction::UAction()
{
	Icon = nullptr;
	type = ActionType::Not;
}


void UAction::Damage(AMonster* target, int DamageAmount)
{
	target->HP -= DamageAmount;
}

void UAction::Act()
{
	//UAction�� �ƹ��͵� ������ �������̽��� �����Ϸ��ϴ� �׳� �ϱ�� ��
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("Action ACT"));
}

UAction* UAction::SetAction(TSubclassOf<UCard> Card, int Team)
{
	UAction* item = NewObject<UAction>();;
	item->type = ActionType::Not;

	//�׼� �̹��� ����� �κ�, �׼��̹����� �ϼ��Ǹ� �����ؾ� ��
	
		int ActionImage = 1;
		ActionImage %= 5;
		ActionImage += 1;
		FString ImageAddress = TEXT("/Game/DBD/UI/Image/Card/");
		ImageAddress += FString(FString::Printf(TEXT("%d.%d"), ActionImage, ActionImage));

		const TCHAR* TexturePathPtr = *ImageAddress;

		item->Icon = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, TexturePathPtr));
	
	

	return item;
}