// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Containers/UnrealString.h"
#include <string>
#include "LaunchEXE.generated.h"

/**
 * 
 */
UCLASS()
class MOBAGAME_API ULaunchEXE : public UBlueprintFunctionLibrary
{
	GENERATED_BODY() public:

		UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LaunchEXE"))
			static FString LaunchEXE(FString FileNameA);
	
};
