// Fill out your copyright notice in the Description page of Project Settings.

#include "LaunchEXE.h"
#include <Runtime\Core\Public\Misc\Paths.h>

FString ULaunchEXE::LaunchEXE(FString FileNameA)
{
    FPlatformProcess::CreateProc(*FileNameA, nullptr, true, false, false, nullptr, 0, nullptr, nullptr);
    return FileNameA;
}