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

UCard* UCard::SetCard(int CardID)
{
	CardID %= 5;
	CardID += 1;
	FString CardImageAddress = TEXT("/Game/DBD/UI/Image/Card/");
	CardImageAddress += FString(FString::Printf(TEXT("%d.%d"), CardID, CardID));

	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, CardImageAddress, false);

	UCard* temp = NewObject<UCard>(GetTransientPackage(),UCard::StaticClass());;
	temp->id = CardID; 
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString::Printf(TEXT("ID: %d %d"), CardID, temp->id), false);

	temp->name = TEXT("\0");

	temp->cost = 0;
	const TCHAR* TexturePathPtr = *CardImageAddress;
	temp->image = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, TexturePathPtr));

	// Display the message on the screen.
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, FString::Printf(TEXT("%s"), TexturePathPtr), false);
	return temp;
}






