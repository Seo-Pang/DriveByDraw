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

//여기서 카메라 전환 씬 같은거 넣어보고 싶음.
void UActionAttack::Attack(AMonster* Caster, AMonster* Target)
{
	Caster->Attack(Target);
}