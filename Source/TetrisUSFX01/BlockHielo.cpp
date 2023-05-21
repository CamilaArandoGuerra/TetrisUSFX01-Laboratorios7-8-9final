// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockHielo.h"

// Sets default values
ABlockHielo::ABlockHielo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABlockHielo::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABlockHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockHielo::MostrarInformacion()
{
	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlockMesh"));
	RootComponent = BlockMesh;

	//static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/Mesh/block.block'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BlockMeshAsset(TEXT("StaticMesh'/Game/Mesh/block.block'"));

	if (BlockMeshAsset.Succeeded())
	{
		BlockMesh->SetStaticMesh(BlockMeshAsset.Object);
		//FVector NuevaEscala = FVector(0.08f, 0.08f, 0.08f);
		BlockMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
		UMaterialInterface* MyMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/M_Tech_hex_Tile_Pulse.M_Tech_hex_Tile_Pulse'"));
		UMaterialInterface* MyMaterial1 = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/M_Tech_hex_Tile_Pulse.M_Tech_hex_Tile_Pulse'"));
		BlockMesh->SetMaterial(1, MyMaterial1);
		BlockMesh->SetMaterial(0, MyMaterial);
		//BlockMesh->SetWorldScale3D(NuevaEscala);

		UE_LOG(LogTemp, Warning, TEXT("Soy un bloque de hielo"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Block"));
	}
}