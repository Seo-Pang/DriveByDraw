// Fill out your copyright notice in the Description page of Project Settings.


#include "Deck.h"

UDeck::UDeck() 
{

}
UCard* UDeck::Draw()
{
	UCard* a{ NewObject<UCard>(GetTransientPackage(),UCard::StaticClass())};

	return a;
}
void UDeck::Shuffle()
{

}
void UDeck::InitDeck() 
{
	UCard* CardPtr = *OwnCard.GetData();
	for (int i = 0; i != OwnCard.Num(); ++i)
	{
		CardPtr[i].SetCard(i); //
	}
}