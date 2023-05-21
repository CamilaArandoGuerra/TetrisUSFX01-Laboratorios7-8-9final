// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BlockHielo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockHielo() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockHielo_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockHielo();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlock();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void ABlockHielo::StaticRegisterNativesABlockHielo()
	{
	}
	UClass* Z_Construct_UClass_ABlockHielo_NoRegister()
	{
		return ABlockHielo::StaticClass();
	}
	struct Z_Construct_UClass_ABlockHielo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockHielo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABlock,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockHielo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlockHielo.h" },
		{ "ModuleRelativePath", "BlockHielo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockHielo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockHielo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockHielo_Statics::ClassParams = {
		&ABlockHielo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockHielo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockHielo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockHielo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockHielo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockHielo, 3034522987);
	template<> TETRISUSFX01_API UClass* StaticClass<ABlockHielo>()
	{
		return ABlockHielo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockHielo(Z_Construct_UClass_ABlockHielo, &ABlockHielo::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABlockHielo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockHielo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
