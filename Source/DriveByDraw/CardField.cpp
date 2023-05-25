// Fill out your copyright notice in the Description page of Project Settings.


#include "CardField.h"

// Sets default values
ACardField::ACardField()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FieldBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FieldBody"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> FieldMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));	
	if (FieldMesh.Succeeded())
	{

		FieldBody->SetStaticMesh(FieldMesh.Object);
	}

	RootComponent = FieldBody;
}

// Called when the game starts or when spawned
void ACardField::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACardField::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

