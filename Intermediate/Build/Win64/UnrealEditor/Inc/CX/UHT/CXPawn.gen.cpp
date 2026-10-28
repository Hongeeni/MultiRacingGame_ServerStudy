// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXPawn() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CX_API UClass* Z_Construct_UClass_ACXPawn();
CX_API UClass* Z_Construct_UClass_ACXPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class ACXPawn Function BrakeLights
struct CXPawn_eventBrakeLights_Parms
{
	bool bBraking;
};
static const FName NAME_ACXPawn_BrakeLights = FName(TEXT("BrakeLights"));
void ACXPawn::BrakeLights(bool bBraking)
{
	CXPawn_eventBrakeLights_Parms Parms;
	Parms.bBraking=bBraking ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ACXPawn_BrakeLights);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPawn_BrakeLights_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the brake lights are turned on or off */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the brake lights are turned on or off" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bBraking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBraking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::NewProp_bBraking_SetBit(void* Obj)
{
	((CXPawn_eventBrakeLights_Parms*)Obj)->bBraking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::NewProp_bBraking = { "bBraking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CXPawn_eventBrakeLights_Parms), &Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::NewProp_bBraking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::NewProp_bBraking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPawn, nullptr, "BrakeLights", nullptr, nullptr, Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::PropPointers), sizeof(CXPawn_eventBrakeLights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXPawn_eventBrakeLights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPawn_BrakeLights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ACXPawn Function BrakeLights

// Begin Class ACXPawn Function ClientToServer_Attack
static const FName NAME_ACXPawn_ClientToServer_Attack = FName(TEXT("ClientToServer_Attack"));
void ACXPawn::ClientToServer_Attack()
{
	UFunction* Func = FindFunctionChecked(NAME_ACXPawn_ClientToServer_Attack);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACXPawn_ClientToServer_Attack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPawn_ClientToServer_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPawn, nullptr, "ClientToServer_Attack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_ClientToServer_Attack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPawn_ClientToServer_Attack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACXPawn_ClientToServer_Attack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPawn_ClientToServer_Attack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPawn::execClientToServer_Attack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientToServer_Attack_Implementation();
	P_NATIVE_END;
}
// End Class ACXPawn Function ClientToServer_Attack

// Begin Class ACXPawn Function Multicast_HitEffect
struct CXPawn_eventMulticast_HitEffect_Parms
{
	FVector TraceStart;
	FVector TraceEnd;
	FVector ImpactPoint;
	FVector ImpactNormal;
	bool bHitVehicle;
};
static const FName NAME_ACXPawn_Multicast_HitEffect = FName(TEXT("Multicast_HitEffect"));
void ACXPawn::Multicast_HitEffect(FVector const& TraceStart, FVector const& TraceEnd, FVector const& ImpactPoint, FVector const& ImpactNormal, bool bHitVehicle)
{
	CXPawn_eventMulticast_HitEffect_Parms Parms;
	Parms.TraceStart=TraceStart;
	Parms.TraceEnd=TraceEnd;
	Parms.ImpactPoint=ImpactPoint;
	Parms.ImpactNormal=ImpactNormal;
	Parms.bHitVehicle=bHitVehicle ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ACXPawn_Multicast_HitEffect);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
	static void NewProp_bHitVehicle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitVehicle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPawn_eventMulticast_HitEffect_Parms, TraceStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceStart_MetaData), NewProp_TraceStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPawn_eventMulticast_HitEffect_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceEnd_MetaData), NewProp_TraceEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPawn_eventMulticast_HitEffect_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactPoint_MetaData), NewProp_ImpactPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPawn_eventMulticast_HitEffect_Parms, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactNormal_MetaData), NewProp_ImpactNormal_MetaData) };
void Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::NewProp_bHitVehicle_SetBit(void* Obj)
{
	((CXPawn_eventMulticast_HitEffect_Parms*)Obj)->bHitVehicle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::NewProp_bHitVehicle = { "bHitVehicle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CXPawn_eventMulticast_HitEffect_Parms), &Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::NewProp_bHitVehicle_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::NewProp_TraceEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::NewProp_ImpactPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::NewProp_ImpactNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::NewProp_bHitVehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPawn, nullptr, "Multicast_HitEffect", nullptr, nullptr, Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::PropPointers), sizeof(CXPawn_eventMulticast_HitEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXPawn_eventMulticast_HitEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPawn_Multicast_HitEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPawn_Multicast_HitEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPawn::execMulticast_HitEffect)
{
	P_GET_STRUCT(FVector,Z_Param_TraceStart);
	P_GET_STRUCT(FVector,Z_Param_TraceEnd);
	P_GET_STRUCT(FVector,Z_Param_ImpactPoint);
	P_GET_STRUCT(FVector,Z_Param_ImpactNormal);
	P_GET_UBOOL(Z_Param_bHitVehicle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_HitEffect_Implementation(Z_Param_TraceStart,Z_Param_TraceEnd,Z_Param_ImpactPoint,Z_Param_ImpactNormal,Z_Param_bHitVehicle);
	P_NATIVE_END;
}
// End Class ACXPawn Function Multicast_HitEffect

// Begin Class ACXPawn
void ACXPawn::StaticRegisterNativesACXPawn()
{
	UClass* Class = ACXPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientToServer_Attack", &ACXPawn::execClientToServer_Attack },
		{ "Multicast_HitEffect", &ACXPawn::execMulticast_HitEffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXPawn);
UClass* Z_Construct_UClass_ACXPawn_NoRegister()
{
	return ACXPawn::StaticClass();
}
struct Z_Construct_UClass_ACXPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Pawn class\n *  Handles common functionality for all vehicle types,\n *  including input handling and camera management.\n *  \n *  Specific vehicle configurations are handled in subclasses.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CXPawn.h" },
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Pawn class\nHandles common functionality for all vehicle types,\nincluding input handling and camera management.\n\nSpecific vehicle configurations are handled in subclasses." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the front camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the front camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Front Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front Camera component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the back camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the back camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Back Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Back Camera component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Steering Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steering Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Throttle Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Throttle Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Brake Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brake Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handbrake Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handbrake Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAroundAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Around Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Around Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleCameraAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle Camera Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle Camera Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetVehicleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset Vehicle Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset Vehicle Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CXPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitParticle_MetaData[] = {
		{ "Category", "Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Particle system for the attack effect */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Particle system for the attack effect" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrottleAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrakeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandbrakeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAroundAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleCameraAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetVehicleAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitParticle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXPawn_BrakeLights, "BrakeLights" }, // 694148575
		{ &Z_Construct_UFunction_ACXPawn_ClientToServer_Attack, "ClientToServer_Attack" }, // 2517497506
		{ &Z_Construct_UFunction_ACXPawn_Multicast_HitEffect, "Multicast_HitEffect" }, // 1138887788
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_FrontSpringArm = { "FrontSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, FrontSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontSpringArm_MetaData), NewProp_FrontSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_FrontCamera = { "FrontCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, FrontCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontCamera_MetaData), NewProp_FrontCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_BackSpringArm = { "BackSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, BackSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackSpringArm_MetaData), NewProp_BackSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_BackCamera = { "BackCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, BackCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackCamera_MetaData), NewProp_BackCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_SteeringAction = { "SteeringAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, SteeringAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringAction_MetaData), NewProp_SteeringAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_ThrottleAction = { "ThrottleAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, ThrottleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrottleAction_MetaData), NewProp_ThrottleAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_BrakeAction = { "BrakeAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, BrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakeAction_MetaData), NewProp_BrakeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_HandbrakeAction = { "HandbrakeAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, HandbrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandbrakeAction_MetaData), NewProp_HandbrakeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_LookAroundAction = { "LookAroundAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, LookAroundAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAroundAction_MetaData), NewProp_LookAroundAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_ToggleCameraAction = { "ToggleCameraAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, ToggleCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleCameraAction_MetaData), NewProp_ToggleCameraAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_ResetVehicleAction = { "ResetVehicleAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, ResetVehicleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetVehicleAction_MetaData), NewProp_ResetVehicleAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAction_MetaData), NewProp_AttackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_HitParticle = { "HitParticle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, HitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitParticle_MetaData), NewProp_HitParticle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_FrontSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_FrontCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_BackSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_BackCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_SteeringAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_ThrottleAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_BrakeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_HandbrakeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_LookAroundAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_ToggleCameraAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_ResetVehicleAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_AttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_HitParticle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXPawn_Statics::ClassParams = {
	&ACXPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACXPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXPawn_Statics::PropPointers),
	0,
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXPawn()
{
	if (!Z_Registration_Info_UClass_ACXPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXPawn.OuterSingleton, Z_Construct_UClass_ACXPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXPawn.OuterSingleton;
}
template<> CX_API UClass* StaticClass<ACXPawn>()
{
	return ACXPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXPawn);
ACXPawn::~ACXPawn() {}
// End Class ACXPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_CX_Source_CX_CXPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXPawn, ACXPawn::StaticClass, TEXT("ACXPawn"), &Z_Registration_Info_UClass_ACXPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXPawn), 1831444298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CX_Source_CX_CXPawn_h_1058656673(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_CX_Source_CX_CXPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CX_Source_CX_CXPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
