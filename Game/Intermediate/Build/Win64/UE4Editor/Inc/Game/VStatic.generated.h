// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_VStatic_generated_h
#error "VStatic.generated.h already included, missing '#pragma once' in VStatic.h"
#endif
#define GAME_VStatic_generated_h

#define Game_Source_Game_Public_VStatic_h_25_RPC_WRAPPERS
#define Game_Source_Game_Public_VStatic_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Game_Public_VStatic_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVStatic(); \
	friend GAME_API class UClass* Z_Construct_UClass_UVStatic(); \
public: \
	DECLARE_CLASS(UVStatic, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(UVStatic) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Game_Source_Game_Public_VStatic_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUVStatic(); \
	friend GAME_API class UClass* Z_Construct_UClass_UVStatic(); \
public: \
	DECLARE_CLASS(UVStatic, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(UVStatic) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Game_Source_Game_Public_VStatic_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVStatic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVStatic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVStatic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVStatic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVStatic(UVStatic&&); \
	NO_API UVStatic(const UVStatic&); \
public:


#define Game_Source_Game_Public_VStatic_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVStatic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVStatic(UVStatic&&); \
	NO_API UVStatic(const UVStatic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVStatic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVStatic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVStatic)


#define Game_Source_Game_Public_VStatic_h_25_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Game_Public_VStatic_h_22_PROLOG
#define Game_Source_Game_Public_VStatic_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Public_VStatic_h_25_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Public_VStatic_h_25_RPC_WRAPPERS \
	Game_Source_Game_Public_VStatic_h_25_INCLASS \
	Game_Source_Game_Public_VStatic_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_Public_VStatic_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Public_VStatic_h_25_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Public_VStatic_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_Public_VStatic_h_25_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_Public_VStatic_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_Public_VStatic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
