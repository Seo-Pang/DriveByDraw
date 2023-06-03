// Fill out your copyright notice in the Description page of Project Settings.


#include "Deck.h"

UDeck::UDeck() 
{
	DrawIndex = 0;
}
UCard* UDeck::Draw()
{
	UCard* CardToDraw = nullptr;
	if (DrawIndex < OwnCard.Num())
	{
		CardToDraw = OwnCard[DrawIndex];
		DrawIndex++;
	}
	return CardToDraw;
}
void UDeck::Shuffle()
{

}
void UDeck::InitDeck(int CardMaxNumber) 
{
	
	OwnCard.Empty();

	for (int i = 0; i < CardMaxNumber; i++)
	{
		OwnCard.Add(NewObject<UCard>(GetTransientPackage(), UCard::StaticClass()));
	}

	for (int i = 0; i != OwnCard.Num(); i++)
	{
		
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString(FString::Printf(TEXT("I : %d"), i)), false);
		OwnCard[i]= UCard::SetCard(i);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString(FString::Printf(TEXT("IDD : %d"), OwnCard[i]->id)), false);
	}
}