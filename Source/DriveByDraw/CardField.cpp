// Fill out your copyright notice in the Description page of Project Settings.


#include "CardField.h"

// Sets default values
ACardField::ACardField()
{

	CardData = nullptr;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MainComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("MainBox"));
	RootComponent = MainComponent;

	FieldBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FieldBody"));

	ConstructorHelpers::FObjectFinder<UStaticMesh> FieldMesh(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));	
	if (FieldMesh.Succeeded())
	{
		FieldBody->SetStaticMesh(FieldMesh.Object);
	}

	FieldBody->SetupAttachment(RootComponent);

	MonsterSpawnLocation = CreateDefaultSubobject<UBoxComponent>(TEXT("MonsterSpawn"));
	MonsterSpawnLocation->SetupAttachment(RootComponent);
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

