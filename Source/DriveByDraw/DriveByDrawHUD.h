// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "DriveByDrawHUD.generated.h"

UCLASS()
class ADriveByDrawHUD : public AHUD
{
	GENERATED_BODY()

public:
	ADriveByDrawHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

