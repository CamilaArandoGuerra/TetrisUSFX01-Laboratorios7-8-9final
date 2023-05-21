// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Block.h"
#include "BlockPiedra.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API ABlockPiedra : public ABlock
{
	GENERATED_BODY()

public:
	ABlockPiedra();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void MostrarInformacion();

	UStaticMeshComponent* BlockMesh;
	
};
