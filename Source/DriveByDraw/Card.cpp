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
	//���� ī�带 ����ؾ� ������ ��� �׳� Card �����̸� ���� �ʱ�� �ϰ� �ʹ�.
	//���� �Ҹ����� �˰� ������ ī���� ��.

	//�Ϲ� ī��� ����� ��.
	return false;
}
