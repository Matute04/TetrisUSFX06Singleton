// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TETRISUSFX01_Board_generated_h
#error "Board.generated.h already included, missing '#pragma once' in Board.h"
#endif
#define TETRISUSFX01_Board_generated_h

#define TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_SPARSE_DATA
#define TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_RPC_WRAPPERS
#define TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoard(); \
	friend struct Z_Construct_UClass_ABoard_Statics; \
public: \
	DECLARE_CLASS(ABoard, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisUSFX01"), NO_API) \
	DECLARE_SERIALIZER(ABoard)


#define TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABoard(); \
	friend struct Z_Construct_UClass_ABoard_Statics; \
public: \
	DECLARE_CLASS(ABoard, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TetrisUSFX01"), NO_API) \
	DECLARE_SERIALIZER(ABoard)


#define TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoard(ABoard&&); \
	NO_API ABoard(const ABoard&); \
public:


#define TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoard(ABoard&&); \
	NO_API ABoard(const ABoard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoard)


#define TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PiezaBrillante() { return STRUCT_OFFSET(ABoard, PiezaBrillante); } \
	FORCEINLINE static uint32 __PPO__PiezaDorada() { return STRUCT_OFFSET(ABoard, PiezaDorada); } \
	FORCEINLINE static uint32 __PPO__PiezaMetalica() { return STRUCT_OFFSET(ABoard, PiezaMetalica); } \
	FORCEINLINE static uint32 __PPO__PiezaHielo() { return STRUCT_OFFSET(ABoard, PiezaHielo); } \
	FORCEINLINE static uint32 __PPO__PiezaPiedra() { return STRUCT_OFFSET(ABoard, PiezaPiedra); } \
	FORCEINLINE static uint32 __PPO__PiezaMulticolor() { return STRUCT_OFFSET(ABoard, PiezaMulticolor); } \
	FORCEINLINE static uint32 __PPO__PiezaDirector() { return STRUCT_OFFSET(ABoard, PiezaDirector); }


#define TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_12_PROLOG
#define TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_PRIVATE_PROPERTY_OFFSET \
	TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_SPARSE_DATA \
	TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_RPC_WRAPPERS \
	TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_INCLASS \
	TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_PRIVATE_PROPERTY_OFFSET \
	TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_SPARSE_DATA \
	TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_INCLASS_NO_PURE_DECLS \
	TetrisUSFX06_master_Source_TetrisUSFX01_Board_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TETRISUSFX01_API UClass* StaticClass<class ABoard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TetrisUSFX06_master_Source_TetrisUSFX01_Board_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
