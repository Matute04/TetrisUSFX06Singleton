// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Board.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoard() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABoard_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABoard();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APieza_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaBrillante_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaDorada_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaMetalica_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaHielo_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaPiedra_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaMulticolor_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaDirector_NoRegister();
// End Cross Module References
	void ABoard::StaticRegisterNativesABoard()
	{
	}
	UClass* Z_Construct_UClass_ABoard_NoRegister()
	{
		return ABoard::StaticClass();
	}
	struct Z_Construct_UClass_ABoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fabrica_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Fabrica;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPiece_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPiece;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PiezaBrillante_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PiezaBrillante;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PiezaDorada_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PiezaDorada;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PiezaMetalica_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PiezaMetalica;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PiezaHielo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PiezaHielo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PiezaPiedra_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PiezaPiedra;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PiezaMulticolor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PiezaMulticolor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PiezaDirector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PiezaDirector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Board.h" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_Fabrica_MetaData[] = {
		{ "Comment", "// constructor de la clase ABoard.\n" },
		{ "ModuleRelativePath", "Board.h" },
		{ "ToolTip", "constructor de la clase ABoard." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_Fabrica = { "Fabrica", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, Fabrica), Z_Construct_UClass_ABoard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_Fabrica_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_Fabrica_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece_MetaData[] = {
		{ "Comment", "// funci?n que se ejecuta cuando se crea el objeto.\n// macro que indica que la variable SceneComponent es una variable que se puede editar en el editor de Unreal Engine.\n" },
		{ "ModuleRelativePath", "Board.h" },
		{ "ToolTip", "funci?n que se ejecuta cuando se crea el objeto.\nmacro que indica que la variable SceneComponent es una variable que se puede editar en el editor de Unreal Engine." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece = { "CurrentPiece", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, CurrentPiece), Z_Construct_UClass_APieza_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_PiezaBrillante_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_PiezaBrillante = { "PiezaBrillante", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, PiezaBrillante), Z_Construct_UClass_APiezaBrillante_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaBrillante_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaBrillante_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_PiezaDorada_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_PiezaDorada = { "PiezaDorada", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, PiezaDorada), Z_Construct_UClass_APiezaDorada_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaDorada_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaDorada_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_PiezaMetalica_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_PiezaMetalica = { "PiezaMetalica", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, PiezaMetalica), Z_Construct_UClass_APiezaMetalica_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaMetalica_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaMetalica_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_PiezaHielo_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_PiezaHielo = { "PiezaHielo", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, PiezaHielo), Z_Construct_UClass_APiezaHielo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaHielo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaHielo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_PiezaPiedra_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_PiezaPiedra = { "PiezaPiedra", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, PiezaPiedra), Z_Construct_UClass_APiezaPiedra_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaPiedra_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaPiedra_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_PiezaMulticolor_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "Board.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_PiezaMulticolor = { "PiezaMulticolor", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, PiezaMulticolor), Z_Construct_UClass_APiezaMulticolor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaMulticolor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaMulticolor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoard_Statics::NewProp_PiezaDirector_MetaData[] = {
		{ "Category", "Main" },
		{ "Comment", "//The Engineer Actor\n" },
		{ "ModuleRelativePath", "Board.h" },
		{ "ToolTip", "The Engineer Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoard_Statics::NewProp_PiezaDirector = { "PiezaDirector", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoard, PiezaDirector), Z_Construct_UClass_APiezaDirector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaDirector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::NewProp_PiezaDirector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_Fabrica,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_CurrentPiece,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_PiezaBrillante,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_PiezaDorada,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_PiezaMetalica,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_PiezaHielo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_PiezaPiedra,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_PiezaMulticolor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoard_Statics::NewProp_PiezaDirector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoard_Statics::ClassParams = {
		&ABoard::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoard, 59847151);
	template<> TETRISUSFX01_API UClass* StaticClass<ABoard>()
	{
		return ABoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoard(Z_Construct_UClass_ABoard, &ABoard::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
