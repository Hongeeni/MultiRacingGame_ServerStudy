// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/Public/CXPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXPlayerState() {}

// Begin Cross Module References
CX_API UClass* Z_Construct_UClass_ACXPlayerState();
CX_API UClass* Z_Construct_UClass_ACXPlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class ACXPlayerState Function ClientToServer_AddCoins
struct CXPlayerState_eventClientToServer_AddCoins_Parms
{
	int32 Amount;
};
static const FName NAME_ACXPlayerState_ClientToServer_AddCoins = FName(TEXT("ClientToServer_AddCoins"));
void ACXPlayerState::ClientToServer_AddCoins(int32 const& Amount)
{
	CXPlayerState_eventClientToServer_AddCoins_Parms Parms;
	Parms.Amount=Amount;
	UFunction* Func = FindFunctionChecked(NAME_ACXPlayerState_ClientToServer_AddCoins);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPlayerState_ClientToServer_AddCoins_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CXPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACXPlayerState_ClientToServer_AddCoins_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerState_eventClientToServer_AddCoins_Parms, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerState_ClientToServer_AddCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerState_ClientToServer_AddCoins_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_ClientToServer_AddCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerState_ClientToServer_AddCoins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPlayerState, nullptr, "ClientToServer_AddCoins", nullptr, nullptr, Z_Construct_UFunction_ACXPlayerState_ClientToServer_AddCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_ClientToServer_AddCoins_Statics::PropPointers), sizeof(CXPlayerState_eventClientToServer_AddCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_ClientToServer_AddCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerState_ClientToServer_AddCoins_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXPlayerState_eventClientToServer_AddCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerState_ClientToServer_AddCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerState_ClientToServer_AddCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerState::execClientToServer_AddCoins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientToServer_AddCoins_Implementation(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ACXPlayerState Function ClientToServer_AddCoins

// Begin Class ACXPlayerState Function GetPlayerStateInfo
struct Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics
{
	struct CXPlayerState_eventGetPlayerStateInfo_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CXPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerState_eventGetPlayerStateInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPlayerState, nullptr, "GetPlayerStateInfo", nullptr, nullptr, Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::CXPlayerState_eventGetPlayerStateInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::CXPlayerState_eventGetPlayerStateInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerState::execGetPlayerStateInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetPlayerStateInfo();
	P_NATIVE_END;
}
// End Class ACXPlayerState Function GetPlayerStateInfo

// Begin Class ACXPlayerState
void ACXPlayerState::StaticRegisterNativesACXPlayerState()
{
	UClass* Class = ACXPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientToServer_AddCoins", &ACXPlayerState::execClientToServer_AddCoins },
		{ "GetPlayerStateInfo", &ACXPlayerState::execGetPlayerStateInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXPlayerState);
UClass* Z_Construct_UClass_ACXPlayerState_NoRegister()
{
	return ACXPlayerState::StaticClass();
}
struct Z_Construct_UClass_ACXPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CXPlayerState.h" },
		{ "ModuleRelativePath", "Public/CXPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[] = {
		{ "ModuleRelativePath", "Public/CXPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonusMaxSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/CXPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusMaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXPlayerState_ClientToServer_AddCoins, "ClientToServer_AddCoins" }, // 3340954339
		{ &Z_Construct_UFunction_ACXPlayerState_GetPlayerStateInfo, "GetPlayerStateInfo" }, // 2489090802
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACXPlayerState_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerState, Coins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coins_MetaData), NewProp_Coins_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACXPlayerState_Statics::NewProp_BonusMaxSpeed = { "BonusMaxSpeed", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerState, BonusMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonusMaxSpeed_MetaData), NewProp_BonusMaxSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerState_Statics::NewProp_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerState_Statics::NewProp_BonusMaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXPlayerState_Statics::ClassParams = {
	&ACXPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACXPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXPlayerState()
{
	if (!Z_Registration_Info_UClass_ACXPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXPlayerState.OuterSingleton, Z_Construct_UClass_ACXPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXPlayerState.OuterSingleton;
}
template<> CX_API UClass* StaticClass<ACXPlayerState>()
{
	return ACXPlayerState::StaticClass();
}
void ACXPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Coins(TEXT("Coins"));
	static const FName Name_BonusMaxSpeed(TEXT("BonusMaxSpeed"));
	const bool bIsValid = true
		&& Name_Coins == ClassReps[(int32)ENetFields_Private::Coins].Property->GetFName()
		&& Name_BonusMaxSpeed == ClassReps[(int32)ENetFields_Private::BonusMaxSpeed].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACXPlayerState"));
}
ACXPlayerState::ACXPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXPlayerState);
ACXPlayerState::~ACXPlayerState() {}
// End Class ACXPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_CX_Source_CX_Public_CXPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXPlayerState, ACXPlayerState::StaticClass, TEXT("ACXPlayerState"), &Z_Registration_Info_UClass_ACXPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXPlayerState), 4072047808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CX_Source_CX_Public_CXPlayerState_h_134616136(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_CX_Source_CX_Public_CXPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CX_Source_CX_Public_CXPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
