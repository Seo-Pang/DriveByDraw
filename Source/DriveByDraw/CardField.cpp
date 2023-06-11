// Fill out your copyright notice in the Description page of Project Settings.


#include "CardField.h"

// Sets default values
ACardField::ACardField()
{
	MyTeam = false;
	CardData = nullptr;
	FieldOwner = nullptr;
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

bool ACardField::DragOnCard_Implementation(UCard* DragCard)
{
	bool ReturnData = false;
	
	switch (DragCard->type)
	{
	case CardType::Card:
		//Card 
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Emerald, TEXT("Card TYPE"));
		break;
	case CardType::MonsterCard :
		//MonsterCard
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Emerald, TEXT("MonsterCard TYPE"));
		SpawnMonster(UCard::SetCard(1));
		break;
	case CardType::AttackCard :
		//AttackCard
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Emerald, TEXT("AttackCard TYPE"));
		break;
	case CardType::SpeedCard :
		//SpeedCard
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Emerald, TEXT("SpeedCard TYPE"));
		break;
	default :
		break;
	}
	
	

	return ReturnData;
}

AMonster* ACardField::SpawnMonster(UCard* Card)
{
	AMonster* iMonster = nullptr;


	//¿©±â ¿Ö ¾ÈµÊ?
	/*TSubclassOf<AMonster> iMonsterClass;
	ConstructorHelpers::FObjectFinder<UClass> BPMonster(TEXT("Blueprint'/Game/DBD/Monster/BP_Crow.BP_Crow_C'"));
	if (BPMonster.Succeeded())
	{
		iMonsterClass = BPMonster.Object;
		iMonster = GetWorld()->SpawnActor<AMonster>(iMonsterClass);
	}*/
	return iMonster;
	
}

