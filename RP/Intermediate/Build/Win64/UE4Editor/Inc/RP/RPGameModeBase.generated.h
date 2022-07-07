// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RP_RPGameModeBase_generated_h
#error "RPGameModeBase.generated.h already included, missing '#pragma once' in RPGameModeBase.h"
#endif
#define RP_RPGameModeBase_generated_h

#define RP_Source_RP_RPGameModeBase_h_15_SPARSE_DATA
#define RP_Source_RP_RPGameModeBase_h_15_RPC_WRAPPERS
#define RP_Source_RP_RPGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define RP_Source_RP_RPGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGameModeBase(); \
	friend struct Z_Construct_UClass_ARPGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ARPGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RP"), NO_API) \
	DECLARE_SERIALIZER(ARPGameModeBase)


#define RP_Source_RP_RPGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARPGameModeBase(); \
	friend struct Z_Construct_UClass_ARPGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ARPGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RP"), NO_API) \
	DECLARE_SERIALIZER(ARPGameModeBase)


#define RP_Source_RP_RPGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGameModeBase(ARPGameModeBase&&); \
	NO_API ARPGameModeBase(const ARPGameModeBase&); \
public:


#define RP_Source_RP_RPGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGameModeBase(ARPGameModeBase&&); \
	NO_API ARPGameModeBase(const ARPGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGameModeBase)


#define RP_Source_RP_RPGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define RP_Source_RP_RPGameModeBase_h_12_PROLOG
#define RP_Source_RP_RPGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RP_Source_RP_RPGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	RP_Source_RP_RPGameModeBase_h_15_SPARSE_DATA \
	RP_Source_RP_RPGameModeBase_h_15_RPC_WRAPPERS \
	RP_Source_RP_RPGameModeBase_h_15_INCLASS \
	RP_Source_RP_RPGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RP_Source_RP_RPGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RP_Source_RP_RPGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	RP_Source_RP_RPGameModeBase_h_15_SPARSE_DATA \
	RP_Source_RP_RPGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RP_Source_RP_RPGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	RP_Source_RP_RPGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RP_API UClass* StaticClass<class ARPGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RP_Source_RP_RPGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
