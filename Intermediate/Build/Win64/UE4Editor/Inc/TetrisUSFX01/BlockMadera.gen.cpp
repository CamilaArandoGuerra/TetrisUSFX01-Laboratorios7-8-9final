// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BlockMadera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockMadera() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockMadera_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockMadera();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlock();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void ABlockMadera::StaticRegisterNativesABlockMadera()
	{
	}
	UClass* Z_Construct_UClass_ABlockMadera_NoRegister()
	{
		return ABlockMadera::StaticClass();
	}
	struct Z_Construct_UClass_ABlockMadera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockMadera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABlock,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockMadera_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlockMadera.h" },
		{ "ModuleRelativePath", "BlockMadera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockMadera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockMadera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockMadera_Statics::ClassParams = {
		&ABlockMadera::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABlockMadera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockMadera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockMadera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockMadera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockMadera, 3695774496);
	template<> TETRISUSFX01_API UClass* StaticClass<ABlockMadera>()
	{
		return ABlockMadera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockMadera(Z_Construct_UClass_ABlockMadera, &ABlockMadera::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABlockMadera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockMadera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
