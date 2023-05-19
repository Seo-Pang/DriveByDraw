// Fill out your copyright notice in the Description page of Project Settings.


#include "Card.h"
#include <random>

UCard::UCard()
{
	id = 0;
	name = TEXT("\0");
	cost = 0;
	image = NULL;
}

void UCard::Act()
{

}

CardType UCard::GetType()
{
	return CardType::Card;
}

UCard* UCard::SetCard(int cardID)
{
	UCard* temp{NewObject<UCard>(GetTransientPackage(),UCard::StaticClass()) };;
	temp->id = 0;
	temp->name = TEXT("\0");
	temp->cost = 0;
	
	temp->image = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, TEXT("/Game/DBD/UI/Image/Card/1.1")));
	return temp;
}




