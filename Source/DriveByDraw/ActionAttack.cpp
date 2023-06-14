// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionAttack.h"

UActionAttack::UActionAttack()
{
	type = ActionType::Attack;
}

void UActionAttack::Act() 
{
	Attack(CastingMonster, TargettingMonster);
}

//���⼭ ī�޶� ��ȯ �� ������ �־�� ����.
void UActionAttack::Attack(AMonster* Caster, AMonster* Target)
{
	Caster->Attack(Target);
}