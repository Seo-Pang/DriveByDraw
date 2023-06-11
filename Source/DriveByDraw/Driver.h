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

class ACardField;
class UDeck;

UCLASS()
class DRIVEBYDRAW_API ADriver : public ACharacter
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool MyTeam;

	UPROPERTY(EditAnywhere)
		UDeck* OwnDeck;

	UPROPERTY(EditAnywhere)
		TArray<ACardField*> OwnField;

	//사용할 기본 클래스
	UPROPERTY(EditAnywhere)
		UBlueprint* DefaultField;

protected:

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComponent;

private:
	//max count 
	const int FieldNumber = 6;


public:	
	// Sets default values for this character's properties
	ADriver();

	UFUNCTION(BlueprintCallable)
		void Debugging();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void ToggleWidgetVisibility();

};
