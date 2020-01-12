// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define GAME_Tank_generated_h

#define Game_Source_Game_Public_Tank_h_12_RPC_WRAPPERS
#define Game_Source_Game_Public_Tank_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Source_Game_Public_Tank_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend GAME_API class UClass* Z_Construct_UClass_ATank(); \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(ATank) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Game_Source_Game_Public_Tank_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATank(); \
	friend GAME_API class UClass* Z_Construct_UClass_ATank(); \
public: \
	DECLARE_CLASS(ATank, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(ATank) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Game_Source_Game_Public_Tank_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATank(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public:


#define Game_Source_Game_Public_Tank_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank)


#define Game_Source_Game_Public_Tank_h_12_PRIVATE_PROPERTY_OFFSET
#define Game_Source_Game_Public_Tank_h_9_PROLOG
#define Game_Source_Game_Public_Tank_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Public_Tank_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Public_Tank_h_12_RPC_WRAPPERS \
	Game_Source_Game_Public_Tank_h_12_INCLASS \
	Game_Source_Game_Public_Tank_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Source_Game_Public_Tank_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Source_Game_Public_Tank_h_12_PRIVATE_PROPERTY_OFFSET \
	Game_Source_Game_Public_Tank_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Source_Game_Public_Tank_h_12_INCLASS_NO_PURE_DECLS \
	Game_Source_Game_Public_Tank_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Source_Game_Public_Tank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS