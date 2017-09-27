// Fill out your copyright notice in the Description page of Project Settings.

#include "LittleSprouts.h"
#include "ReadWriteTextFile.h"

bool UReadWriteTextFile::LoadText(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}

bool UReadWriteTextFile::SaveText(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}


