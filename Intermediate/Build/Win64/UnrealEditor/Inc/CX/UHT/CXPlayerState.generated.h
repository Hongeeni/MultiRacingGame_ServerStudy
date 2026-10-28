// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CX_CXPlayerState_generated_h
#error "CXPlayerState.generated.h already included, missing '#pragma once' in CXPlayerState.h"
#endif
#define CX_CXPlayerState_generated_h

#define FID_CX_Source_CX_Public_CXPlayerState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientToServer_AddCoins_Implementation(int32 const& Amount); \
	DECLARE_FUNCTION(execGetPlayerStateInfo); \
	DECLARE_FUNCTION(execClientToServer_AddCoins);


#define FID_CX_Source_CX_Public_CXPlayerState_h_10_CALLBACK_WRAPPERS
#define FID_CX_Source_CX_Public_CXPlayerState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXPlayerState(); \
	friend struct Z_Construct_UClass_ACXPlayerState_Statics; \
public: \
	DECLARE_CLASS(ACXPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(ACXPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerNameString=NETFIELD_REP_START, \
		Coins, \
		BonusMaxSpeed, \
		NETFIELD_REP_END=BonusMaxSpeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_CX_Source_CX_Public_CXPlayerState_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACXPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXPlayerState(ACXPlayerState&&); \
	ACXPlayerState(const ACXPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACXPlayerState) \
	NO_API virtual ~ACXPlayerState();


#define FID_CX_Source_CX_Public_CXPlayerState_h_7_PROLOG
#define FID_CX_Source_CX_Public_CXPlayerState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CX_Source_CX_Public_CXPlayerState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CX_Source_CX_Public_CXPlayerState_h_10_CALLBACK_WRAPPERS \
	FID_CX_Source_CX_Public_CXPlayerState_h_10_INCLASS_NO_PURE_DECLS \
	FID_CX_Source_CX_Public_CXPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class ACXPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CX_Source_CX_Public_CXPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
