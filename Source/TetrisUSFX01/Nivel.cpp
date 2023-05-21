// Fill out your copyright notice in the Description page of Project Settings.

//
//#include "Nivel.h"
//
//#include "BlockMetal.h"
//#include "BlockHielo.h"
//#include "BlockPiedra.h"
//#include "BlockMadera.h"
//#include "BlockExplosivo.h"

//// Sets default values
//ANivel::ANivel()
//{
// 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	PrimaryActorTick.bCanEverTick = true;
//
//}
//
//// Called when the game starts or when spawned
//void ANivel::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}
//
//// Called every frame
//void ANivel::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
//ABlock* ANivel::CrearBloque(FString nombreBloque)
//{
//	//Select which potion to spawn depending on the passed string
//	if (nombreBloque.Equals("Metal")) {
//		return GetWorld()->SpawnActor<ABlockMetal>(ABlockMetal::StaticClass());
//	}
//	else if (nombreBloque.Equals("Madera")) {
//		return GetWorld()->SpawnActor<ABlockMadera>(ABlockMadera::StaticClass());
//	}
//	else if (nombreBloque.Equals("hielo")) {
//		return GetWorld()->SpawnActor<ABlockHielo>(ABlockHielo::StaticClass());
//	}
//	else if (nombreBloque.Equals("explosivo")) {
//		return GetWorld()->SpawnActor<ABlockExplosivo>(ABlockExplosivo::StaticClass());
//	}
//	else if (nombreBloque.Equals("piedra")) {
//		return GetWorld()->SpawnActor<ABlockPiedra>(ABlockPiedra::StaticClass());
//	}
//	else return nullptr; //Return null if the string isn't valid
//}
//
