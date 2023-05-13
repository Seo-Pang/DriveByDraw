// Fill out your copyright notice in the Description page of Project Settings.


#include "Card.h"


UCard::UCard()
{
	id = 0;
	name = TEXT("\0");
	cost = 0;
	image = NULL;
}



CardType UCard::GetType()
{
	return CardType::Card;
}

bool UCard::UseCard()
{
	//대충 카드를 사용해야 하지만 어떻게 그냥 Card 종류이면 하지 않기로 하고 싶다.
	//무슨 소리인지 알고 싶으면 카톡할 것.

	//일반 카드는 없어야 함.
	return false;
}
