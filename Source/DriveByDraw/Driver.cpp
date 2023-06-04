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

}

// Called when the game starts or when spawned
void ADriver::BeginPlay()
{
	Super::BeginPlay();

   
	
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