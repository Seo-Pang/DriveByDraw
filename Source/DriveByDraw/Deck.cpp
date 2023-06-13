// Fill out your copyright notice in the Description page of Project Settings.


#include "Deck.h"

UDeck::UDeck() 
{
	DrawIndex = 0;
}
UCard* UDeck::Draw()
{
	UCard* Drawd = nullptr;
	if (DrawIndex < OwnCard.Num())
	{
		Drawd = OwnCard[DrawIndex];
		DrawIndex++;
	}
	;
	return Drawd;
}
void UDeck::Shuffle()
{
	// �������� ���� ���� RandomStream ����
	FRandomStream RandomStream(FMath::Rand());

	// �迭�� �������� ����
	const int32 ArraySize = OwnCard.Num();
	for (int32 i = 0; i < ArraySize - 1; ++i)
	{
		const int32 RandomIndex = RandomStream.RandRange(i, ArraySize - 1);
		if (RandomIndex != i)
		{
			OwnCard.Swap(i, RandomIndex);
		}
	}
}
void UDeck::InitDeck() 
{
	
	OwnCard.Empty();

	for (auto Card : Cards)
	{
		OwnCard.Add(NewObject<UCard>(GetTransientPackage(), Card));
	}
}