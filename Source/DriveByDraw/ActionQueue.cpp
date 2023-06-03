// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionQueue.h"


UActionQueue::UActionQueue()
{
	ActionList = TArray<UAction*>();
}

void UActionQueue::Enqueue(UAction* Action)
{
	ActionList.Add(Action);

}

UAction* UActionQueue::Dequeue()
{
	UAction* Item = NULL;
	if (ActionList.Num() == 0)
	{
		return Item;
	}

	Item = ActionList[0];
	ActionList.RemoveAt(0);
	return Item;
}

int UActionQueue::GetNumber()
{
	//수정 해야함
	return 0;
}