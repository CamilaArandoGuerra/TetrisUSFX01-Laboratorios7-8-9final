// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockExplosivo.h"

// Sets default values
ABlockExplosivo::ABlockExplosivo()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABlockExplosivo::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABlockExplosivo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABlockExplosivo::MostrarInformacion()
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
		UMaterialInterface* MyMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/M_Brick_Clay_Old.M_Brick_Clay_Old'"));
		UMaterialInterface* MyMaterial1 = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Mesh/M_Brick_Clay_Old.M_Brick_Clay_Old'"));
		BlockMesh->SetMaterial(1, MyMaterial1);
		BlockMesh->SetMaterial(0, MyMaterial);
		//BlockMesh->SetWorldScale3D(NuevaEscala);

	UE_LOG(LogTemp, Warning, TEXT("Soy un bloque explosivo"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Block"));
	}
}
