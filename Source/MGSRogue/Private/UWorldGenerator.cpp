// Fill out your copyright notice in the Description page of Project Settings.


#include "UWorldGenerator.h"
#include "DynamicMeshActor.h"
#include "GeometryScript/MeshAssetFunctions.h"
#include "DynamicMesh/MeshAttributeUtil.h"

UWorldGenerator::UWorldGenerator()
{
}

UWorldGenerator::~UWorldGenerator()
{
}

void UWorldGenerator::SetWorldData(UWorldGeneratorData* generatorData)
{
	data = generatorData;
}

void UWorldGenerator::CreateLevel()
{
	SpawnFloor(1000.0, 1000.0);
}

void UWorldGenerator::NextLevel()
{
	currentLevel++;
}

void UWorldGenerator::SpawnFloor(float width, float height)
{
	AActor* floor = GetWorld()->SpawnActor<AActor>(data->FloorClass, FVector(0, 0, 0), FRotator(0, 0, 0));
	floor->SetActorScale3D(FVector(width, height, 1.0));
}

void UWorldGenerator::SpawnWall(FVector posStart, FVector posEnd)
{
}
