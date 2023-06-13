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
	return ActionList.Num();
}

void UActionQueue::QueueTest()
{
	for (auto a : ActionList)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Black, FString::Printf(TEXT("Action: %s"), *a->ActionOwner->GetActorLabel()));
	}
	
}

UActionQueue* UActionQueue::InitQueue()
{
	UActionQueue* temp = NewObject<UActionQueue>(GetTransientPackage(), UActionQueue::StaticClass());;
	return temp;
}