// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXSpeedItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CX_CXSpeedItem_generated_h
#error "CXSpeedItem.generated.h already included, missing '#pragma once' in CXSpeedItem.h"
#endif
#define CX_CXSpeedItem_generated_h

#define FID_CX_Source_CX_Public_CXSpeedItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastPickupEffects_Implementation(); \
	DECLARE_FUNCTION(execMulticastPickupEffects); \
	DECLARE_FUNCTION(execOnOverlapSphereBeginOverlap);


#define FID_CX_Source_CX_Public_CXSpeedItem_h_17_CALLBACK_WRAPPERS
#define FID_CX_Source_CX_Public_CXSpeedItem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXSpeedItem(); \
	friend struct Z_Construct_UClass_ACXSpeedItem_Statics; \
public: \
	DECLARE_CLASS(ACXSpeedItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(ACXSpeedItem)


#define FID_CX_Source_CX_Public_CXSpeedItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXSpeedItem(ACXSpeedItem&&); \
	ACXSpeedItem(const ACXSpeedItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXSpeedItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXSpeedItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACXSpeedItem) \
	NO_API virtual ~ACXSpeedItem();


#define FID_CX_Source_CX_Public_CXSpeedItem_h_14_PROLOG
#define FID_CX_Source_CX_Public_CXSpeedItem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CX_Source_CX_Public_CXSpeedItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CX_Source_CX_Public_CXSpeedItem_h_17_CALLBACK_WRAPPERS \
	FID_CX_Source_CX_Public_CXSpeedItem_h_17_INCLASS_NO_PURE_DECLS \
	FID_CX_Source_CX_Public_CXSpeedItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class ACXSpeedItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CX_Source_CX_Public_CXSpeedItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
