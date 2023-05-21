// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/BlockMetal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockMetal() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockMetal_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlockMetal();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABlock();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void ABlockMetal::StaticRegisterNativesABlockMetal()
	{
	}
	UClass* Z_Construct_UClass_ABlockMetal_NoRegister()
	{
		return ABlockMetal::StaticClass();
	}
	struct Z_Construct_UClass_ABlockMetal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockMetal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABlock,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockMetal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BlockMetal.h" },
		{ "ModuleRelativePath", "BlockMetal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockMetal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockMetal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockMetal_Statics::ClassParams = {
		&ABlockMetal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABlockMetal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockMetal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockMetal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockMetal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockMetal, 3333404634);
	template<> TETRISUSFX01_API UClass* StaticClass<ABlockMetal>()
	{
		return ABlockMetal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockMetal(Z_Construct_UClass_ABlockMetal, &ABlockMetal::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABlockMetal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockMetal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
