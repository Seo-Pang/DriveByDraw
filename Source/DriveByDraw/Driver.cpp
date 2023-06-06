// Fill out your copyright notice in the Description page of Project Settings.


#include "Driver.h"
#include "DrivePlayerController.h"

// Sets default values
ADriver::ADriver()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Create the Spring Arm component
    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
    SpringArmComponent->SetupAttachment(GetRootComponent());

    // Create the camera component
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));

    // Attach the camera to the Spring Arm
    CameraComponent->SetupAttachment(SpringArmComponent);


    //Actor's Card Field Generated
    ACardField* TempField = NewObject<ACardField>();
    OwnField.Init(TempField, FieldNumber);
   

}

// Called when the game starts or when spawned
void ADriver::BeginPlay()
{
	Super::BeginPlay();
    int i = 0;
    for (auto iField : OwnField)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, FString::Printf(TEXT("i = %d"), i), false);
        FVector iOffset(-625/2, 450.f, 0.f);
        iOffset += FVector(125 * i, 0, 0);
        iField = GetWorld()->SpawnActor<ACardField>(DefaultField->GeneratedClass);

        //LoadObject<UBlueprint>(nullptr, TEXT("Blueprint'/Game/DBD/Extra/CardField.CardField'"), TEXT("ASD")
        iField->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        iField->AddActorLocalOffset(iOffset);
        i++;
    }
	
}

// Called every frame
void ADriver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADriver::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

    check(PlayerInputComponent);

    // Bind jump events
    PlayerInputComponent->BindAction("Tap", IE_Pressed, this, &ADriver::ToggleWidgetVisibility);

}


void ADriver::Debugging()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, "Succss", false);
}

void ADriver::ToggleWidgetVisibility()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Black, "Succss", false);



    
}