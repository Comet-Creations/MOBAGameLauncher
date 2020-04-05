// Fill out your copyright notice in the Description page of Project Settings.


#include "RWTxtFile.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;


struct OptionsData
{
    string Title;
    string Category;
    string CommandLine;
    string Type;
    int CheckboxEntries[4];
    string CheckboxText[4];
    bool ToggleEntry;
    string DropdownEntry[3];
    int DropdownActive;

};


bool URWTxtFile::LoadTxt(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

bool URWTxtFile::SaveTxt(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}