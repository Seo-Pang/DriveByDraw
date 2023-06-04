// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Character.h"
#include "Blueprint/UserWidget.h"

#include "Deck.h"
#include "CardField.h"
#include "Driver.generated.h"

UCLASS()
class DRIVEBYDRAW_API ADriver : public ACharacter
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere)
	UDeck* OwnDeck;
	TArray<ACardField*> OwnField;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComponent;

	

public:	
	// Sets default values for this character's properties
	ADriver();

	UFUNCTION(BlueprintCallable)
		void Debugging();


	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ToggleWidgetVisibility();

};
