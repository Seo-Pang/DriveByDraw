// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionAttack.h"

void UActionAttack::Act() 
{
	Attack(CastingMonster, TargettingMonster);
}

//���⼭ ī�޶� ��ȯ �� ������ �־�� ����.
void UActionAttack::Attack(AMonster* Caster, AMonster* Target)
{
	Target->HP -= Caster->AttackDamage;
}