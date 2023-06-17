// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterCard.h"
#include "ActionSpawn.h"

CardType UMonsterCard::GetType()
{
	return CardType::MonsterCard;
}

UMonsterCard::UMonsterCard() : UCard()
{
	ActionData = UActionSpawn::StaticClass();
}