// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockPiedra.h"

//Sets default values
ABlockPiedra::ABlockPiedra()
{
	//Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

//Called when the game starts or when spawned
void ABlockPiedra::BeginPlay()
{
	Super::BeginPlay();
}

//Called every frame
void ABlockPiedra::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockPiedra::MostrarInformacion()
{
	//imprimirNombre();
	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));
	RootComponent = BlockMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));

	if (BlockAsset.Succeeded())
	{
		BlockMesh->SetStaticMesh(BlockAsset.Object);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		UMaterialInterface* MyMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/M_CobbleStone_Pebble.M_CobbleStone_Pebble'"));
		UMaterialInterface* MyMaterial1 = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/M_CobbleStone_Rough.M_CobbleStone_Rough'"));
		BlockMesh->SetMaterial(0, MyMaterial1);
		BlockMesh->SetMaterial(1, MyMaterial);
        
		UE_LOG(LogTemp, Warning, TEXT("%s Soy un bloque de piedra"));

	}

	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Block"));
	}

	
}
