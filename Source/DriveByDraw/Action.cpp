// Fill out your copyright notice in the Description page of Project Settings.


#include "Action.h"

void UAction::SpawnMonster()
{

}

void UAction::Damage(AMonster* target, float damage)
{

}

UAction* UAction::SetAction()
{
	UAction* item = NewObject<UAction>(GetTransientPackage(), UAction::StaticClass());;
	item->type = ActionType::Not;

	return item;
}