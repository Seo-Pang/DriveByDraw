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
		int HP;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool MyTeam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<UDeck> DeckSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UDeck* Deck;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<ACardField*> OwnField;

	//사용할 기본 카드필드의 기본 클래스
	UPROPERTY(EditAnywhere)
		UBlueprint* DefaultField;

	//코스트를 사용하기 위해 사용
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Mana;

	//마나를 채우기 위한 자원 재생 속도
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ManaRegeneration;

protected:

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    UCameraComponent* CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

private:
	//max count 
	const int FieldNumber = 6;


public:	
	// Sets default values for this character's properties
	ADriver();

	UFUNCTION(BlueprintCallable)
		void Damage(int DamageAccount);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void Die();
	virtual void Die_Implementation();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


};
