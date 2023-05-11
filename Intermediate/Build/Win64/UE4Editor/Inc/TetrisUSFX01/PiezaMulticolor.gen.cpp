// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PiezaMulticolor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePiezaMulticolor() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaMulticolor_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaMulticolor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APieza_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPiezaConstructora_NoRegister();
// End Cross Module References
	void APiezaMulticolor::StaticRegisterNativesAPiezaMulticolor()
	{
	}
	UClass* Z_Construct_UClass_APiezaMulticolor_NoRegister()
	{
		return APiezaMulticolor::StaticClass();
	}
	struct Z_Construct_UClass_APiezaMulticolor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pieza_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pieza;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APiezaMulticolor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiezaMulticolor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PiezaMulticolor.h" },
		{ "ModuleRelativePath", "PiezaMulticolor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiezaMulticolor_Statics::NewProp_Pieza_MetaData[] = {
		{ "Comment", "//The Lodging Actor\n" },
		{ "ModuleRelativePath", "PiezaMulticolor.h" },
		{ "ToolTip", "The Lodging Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APiezaMulticolor_Statics::NewProp_Pieza = { "Pieza", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APiezaMulticolor, Pieza), Z_Construct_UClass_APieza_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APiezaMulticolor_Statics::NewProp_Pieza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APiezaMulticolor_Statics::NewProp_Pieza_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APiezaMulticolor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiezaMulticolor_Statics::NewProp_Pieza,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APiezaMulticolor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPiezaConstructora_NoRegister, (int32)VTABLE_OFFSET(APiezaMulticolor, IPiezaConstructora), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APiezaMulticolor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APiezaMulticolor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APiezaMulticolor_Statics::ClassParams = {
		&APiezaMulticolor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APiezaMulticolor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APiezaMulticolor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APiezaMulticolor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APiezaMulticolor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APiezaMulticolor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APiezaMulticolor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APiezaMulticolor, 3950325660);
	template<> TETRISUSFX01_API UClass* StaticClass<APiezaMulticolor>()
	{
		return APiezaMulticolor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APiezaMulticolor(Z_Construct_UClass_APiezaMulticolor, &APiezaMulticolor::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("APiezaMulticolor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APiezaMulticolor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
