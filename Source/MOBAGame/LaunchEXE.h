// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LaunchEXE.generated.h"

/**
 * 
 */
UCLASS()
class MOBAGAME_API ULaunchEXE : public UBlueprintFunctionLibrary
{
	GENERATED_BODY() public:

		UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LaunchEXE"))
			static bool LaunchEXE(FString FileNameA);
	
};
