// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionSpawn.h"

UActionSpawn::UActionSpawn()
{
	type = ActionType::Spawn;
}

void UActionSpawn::Act()
{
	SpawnMonster();
}

void UActionSpawn::SpawnMonster()
{

	ActingField->SettingMonster = GetWorld()->SpawnActor<AMonster>(MonsterSet);
	ActingField->SettingMonster->AttachToActor(ActingField, FAttachmentTransformRules::KeepRelativeTransform);

}

void UActionSpawn::AddAttackCard()
{
	//null; make a node
}