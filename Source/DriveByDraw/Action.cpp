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
	//UAction은 아무것도 없으니 인터페이스로 구상하려하다 그냥 하기로 함
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("Action ACT"));
}

UAction* UAction::SetAction(TSubclassOf<UCard> Card, int Team)
{
	UAction* item = NewObject<UAction>();;
	item->type = ActionType::Not;

	//액션 이미지 만드는 부분, 액션이미지가 완성되면 수정해야 함
	
		int ActionImage = 1;
		ActionImage %= 5;
		ActionImage += 1;
		FString ImageAddress = TEXT("/Game/DBD/UI/Image/Card/");
		ImageAddress += FString(FString::Printf(TEXT("%d.%d"), ActionImage, ActionImage));

		const TCHAR* TexturePathPtr = *ImageAddress;

		item->Icon = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, TexturePathPtr));
	
	

	return item;
}