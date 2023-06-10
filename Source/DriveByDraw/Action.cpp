// Fill out your copyright notice in the Description page of Project Settings.


#include "Action.h"

UAction::UAction()
{
	Icon = nullptr;
	type = ActionType::Not;
}

void UAction::SpawnMonster()
{

}

void UAction::Damage(AMonster* target, float damage)
{

}

UAction* UAction::SetAction(UCard* Card, int Team)
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