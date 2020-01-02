// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "tutorial_ccHUD.generated.h"

UCLASS()
class Atutorial_ccHUD : public AHUD
{
	GENERATED_BODY()

public:
	Atutorial_ccHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

