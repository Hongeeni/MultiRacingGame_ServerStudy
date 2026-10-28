// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameState/CXGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CX_CXGameStateBase_generated_h
#error "CXGameStateBase.generated.h already included, missing '#pragma once' in CXGameStateBase.h"
#endif
#define CX_CXGameStateBase_generated_h

#define FID_CX_Source_CX_Public_GameState_CXGameStateBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXGameStateBase(); \
	friend struct Z_Construct_UClass_ACXGameStateBase_Statics; \
public: \
	DECLARE_CLASS(ACXGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(ACXGameStateBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentGameState=NETFIELD_REP_START, \
		RemainingTime, \
		Winners, \
		NETFIELD_REP_END=Winners	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_CX_Source_CX_Public_GameState_CXGameStateBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACXGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXGameStateBase(ACXGameStateBase&&); \
	ACXGameStateBase(const ACXGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACXGameStateBase) \
	NO_API virtual ~ACXGameStateBase();


#define FID_CX_Source_CX_Public_GameState_CXGameStateBase_h_19_PROLOG
#define FID_CX_Source_CX_Public_GameState_CXGameStateBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CX_Source_CX_Public_GameState_CXGameStateBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_CX_Source_CX_Public_GameState_CXGameStateBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class ACXGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CX_Source_CX_Public_GameState_CXGameStateBase_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::None) \
	op(EGameState::Wating) \
	op(EGameState::Playing) \
	op(EGameState::Finished) \
	op(EGameState::End) 

enum class EGameState : uint8;
template<> struct TIsUEnumClass<EGameState> { enum { Value = true }; };
template<> CX_API UEnum* StaticEnum<EGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
