// Fill out your copyright notice in the Description page of Project Settings.


#include "Vehicle.h"

// Sets default values for this component's properties
UVehicle::UVehicle()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UVehicle::BeginPlay()
{
	Super::BeginPlay();
	MovementDirection = GetOwner()->GetActorForwardVector();
	// ...
	
}


// Called every frame
void UVehicle::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	FVector NewLocation = GetOwner()->GetActorLocation() + (MovementDirection * Speed * DeltaTime);
	GetOwner()->SetActorLocation(NewLocation);
	// ...
}

