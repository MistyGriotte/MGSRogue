// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WorldGeneratorData.generated.h"

/**
 * 
 */
UCLASS()
class MGSROGUE_API UWorldGeneratorData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> FloorClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> WallClass;
};
