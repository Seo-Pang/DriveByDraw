// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionQueue.h"


UActionQueue::UActionQueue()
{
	ActionList.Empty();
}

void UActionQueue::Enqueue(UAction* Action)
{
	ActionList.Add(Action);
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, "Enqueue", false);
}

UAction* UActionQueue::Dequeue()
{
	UAction* Item = NULL;
	if (ActionList.Num() == 0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, "Dequeue", false);
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

UActionQueue* UActionQueue::InitQueue()
{
	UActionQueue* temp = NewObject<UActionQueue>(GetTransientPackage(), UActionQueue::StaticClass());;
	return temp;
}