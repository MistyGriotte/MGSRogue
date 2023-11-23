// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DynamicMeshActor.h"
#include "WorldGeneratorData.h"
#include "UWorldGenerator.generated.h"

/**
 * 
 */
UCLASS()
class MGSROGUE_API UWorldGenerator : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UWorldGenerator();
	~UWorldGenerator();

	UFUNCTION(BlueprintCallable)
	void SetWorldData(UWorldGeneratorData* generatorData);
	UFUNCTION(BlueprintCallable)
	void CreateLevel();
	UFUNCTION(BlueprintCallable)
	void NextLevel();

private:
	UWorldGeneratorData* data;
	int currentLevel = 0;
	void SpawnFloor(float width, float height);
	void SpawnWall(FVector posStart, FVector posEnd);
};
