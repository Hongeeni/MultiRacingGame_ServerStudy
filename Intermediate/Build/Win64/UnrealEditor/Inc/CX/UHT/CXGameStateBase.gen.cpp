// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/Public/GameState/CXGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXGameStateBase() {}

// Begin Cross Module References
CX_API UClass* Z_Construct_UClass_ACXGameStateBase();
CX_API UClass* Z_Construct_UClass_ACXGameStateBase_NoRegister();
CX_API UClass* Z_Construct_UClass_ACXPlayerState_NoRegister();
CX_API UEnum* Z_Construct_UEnum_CX_EGameState();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Enum EGameState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameState;
static UEnum* EGameState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CX_EGameState, (UObject*)Z_Construct_UPackage__Script_CX(), TEXT("EGameState"));
	}
	return Z_Registration_Info_UEnum_EGameState.OuterSingleton;
}
template<> CX_API UEnum* StaticEnum<EGameState>()
{
	return EGameState_StaticEnum();
}
struct Z_Construct_UEnum_CX_EGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "End.Name", "EGameState::End" },
		{ "Finished.Name", "EGameState::Finished" },
		{ "ModuleRelativePath", "Public/GameState/CXGameStateBase.h" },
		{ "None.Name", "EGameState::None" },
		{ "Playing.Name", "EGameState::Playing" },
		{ "Wating.Name", "EGameState::Wating" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameState::None", (int64)EGameState::None },
		{ "EGameState::Wating", (int64)EGameState::Wating },
		{ "EGameState::Playing", (int64)EGameState::Playing },
		{ "EGameState::Finished", (int64)EGameState::Finished },
		{ "EGameState::End", (int64)EGameState::End },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CX_EGameState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CX,
	nullptr,
	"EGameState",
	"EGameState",
	Z_Construct_UEnum_CX_EGameState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CX_EGameState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CX_EGameState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CX_EGameState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CX_EGameState()
{
	if (!Z_Registration_Info_UEnum_EGameState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameState.InnerSingleton, Z_Construct_UEnum_CX_EGameState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameState.InnerSingleton;
}
// End Enum EGameState

// Begin Class ACXGameStateBase
void ACXGameStateBase::StaticRegisterNativesACXGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXGameStateBase);
UClass* Z_Construct_UClass_ACXGameStateBase_NoRegister()
{
	return ACXGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ACXGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/CXGameStateBase.h" },
		{ "ModuleRelativePath", "Public/GameState/CXGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGameState_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameState/CXGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameState/CXGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Winners_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameState/CXGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentGameState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentGameState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Winners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Winners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACXGameStateBase_Statics::NewProp_CurrentGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACXGameStateBase_Statics::NewProp_CurrentGameState = { "CurrentGameState", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameStateBase, CurrentGameState), Z_Construct_UEnum_CX_EGameState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGameState_MetaData), NewProp_CurrentGameState_MetaData) }; // 594495047
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACXGameStateBase_Statics::NewProp_RemainingTime = { "RemainingTime", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameStateBase, RemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingTime_MetaData), NewProp_RemainingTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXGameStateBase_Statics::NewProp_Winners_Inner = { "Winners", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACXPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACXGameStateBase_Statics::NewProp_Winners = { "Winners", nullptr, (EPropertyFlags)0x0114000000000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameStateBase, Winners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Winners_MetaData), NewProp_Winners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXGameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameStateBase_Statics::NewProp_CurrentGameState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameStateBase_Statics::NewProp_CurrentGameState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameStateBase_Statics::NewProp_RemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameStateBase_Statics::NewProp_Winners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameStateBase_Statics::NewProp_Winners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXGameStateBase_Statics::ClassParams = {
	&ACXGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACXGameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameStateBase_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXGameStateBase()
{
	if (!Z_Registration_Info_UClass_ACXGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXGameStateBase.OuterSingleton, Z_Construct_UClass_ACXGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXGameStateBase.OuterSingleton;
}
template<> CX_API UClass* StaticClass<ACXGameStateBase>()
{
	return ACXGameStateBase::StaticClass();
}
void ACXGameStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentGameState(TEXT("CurrentGameState"));
	static const FName Name_RemainingTime(TEXT("RemainingTime"));
	static const FName Name_Winners(TEXT("Winners"));
	const bool bIsValid = true
		&& Name_CurrentGameState == ClassReps[(int32)ENetFields_Private::CurrentGameState].Property->GetFName()
		&& Name_RemainingTime == ClassReps[(int32)ENetFields_Private::RemainingTime].Property->GetFName()
		&& Name_Winners == ClassReps[(int32)ENetFields_Private::Winners].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACXGameStateBase"));
}
ACXGameStateBase::ACXGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXGameStateBase);
ACXGameStateBase::~ACXGameStateBase() {}
// End Class ACXGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_CX_Source_CX_Public_GameState_CXGameStateBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameState_StaticEnum, TEXT("EGameState"), &Z_Registration_Info_UEnum_EGameState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 594495047U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXGameStateBase, ACXGameStateBase::StaticClass, TEXT("ACXGameStateBase"), &Z_Registration_Info_UClass_ACXGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXGameStateBase), 3901606947U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CX_Source_CX_Public_GameState_CXGameStateBase_h_1620323745(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_CX_Source_CX_Public_GameState_CXGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CX_Source_CX_Public_GameState_CXGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CX_Source_CX_Public_GameState_CXGameStateBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CX_Source_CX_Public_GameState_CXGameStateBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
