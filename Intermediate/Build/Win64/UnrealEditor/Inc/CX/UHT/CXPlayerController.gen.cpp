// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXPlayerController.h"
#include "CX/Public/Subsystem/ChatSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CX_API UClass* Z_Construct_UClass_ACXPawn_NoRegister();
CX_API UClass* Z_Construct_UClass_ACXPlayerController();
CX_API UClass* Z_Construct_UClass_ACXPlayerController_NoRegister();
CX_API UClass* Z_Construct_UClass_UCXUI_NoRegister();
CX_API UScriptStruct* Z_Construct_UScriptStruct_FChatData();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class ACXPlayerController Function ClientToServer_ChatMessage
struct CXPlayerController_eventClientToServer_ChatMessage_Parms
{
	FString Message;
};
static const FName NAME_ACXPlayerController_ClientToServer_ChatMessage = FName(TEXT("ClientToServer_ChatMessage"));
void ACXPlayerController::ClientToServer_ChatMessage(const FString& Message)
{
	CXPlayerController_eventClientToServer_ChatMessage_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_ACXPlayerController_ClientToServer_ChatMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPlayerController_ClientToServer_ChatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACXPlayerController_ClientToServer_ChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventClientToServer_ChatMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerController_ClientToServer_ChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_ClientToServer_ChatMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ClientToServer_ChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerController_ClientToServer_ChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPlayerController, nullptr, "ClientToServer_ChatMessage", nullptr, nullptr, Z_Construct_UFunction_ACXPlayerController_ClientToServer_ChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ClientToServer_ChatMessage_Statics::PropPointers), sizeof(CXPlayerController_eventClientToServer_ChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ClientToServer_ChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerController_ClientToServer_ChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXPlayerController_eventClientToServer_ChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerController_ClientToServer_ChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerController_ClientToServer_ChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerController::execClientToServer_ChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientToServer_ChatMessage_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ACXPlayerController Function ClientToServer_ChatMessage

// Begin Class ACXPlayerController Function ServerToClient_ChatLog
struct CXPlayerController_eventServerToClient_ChatLog_Parms
{
	TArray<FChatData> ChatLog;
};
static const FName NAME_ACXPlayerController_ServerToClient_ChatLog = FName(TEXT("ServerToClient_ChatLog"));
void ACXPlayerController::ServerToClient_ChatLog(TArray<FChatData> const& ChatLog)
{
	CXPlayerController_eventServerToClient_ChatLog_Parms Parms;
	Parms.ChatLog=ChatLog;
	UFunction* Func = FindFunctionChecked(NAME_ACXPlayerController_ServerToClient_ChatLog);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatLog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChatLog_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChatLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog_Statics::NewProp_ChatLog_Inner = { "ChatLog", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChatData, METADATA_PARAMS(0, nullptr) }; // 929545340
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog_Statics::NewProp_ChatLog = { "ChatLog", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventServerToClient_ChatLog_Parms, ChatLog), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatLog_MetaData), NewProp_ChatLog_MetaData) }; // 929545340
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog_Statics::NewProp_ChatLog_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog_Statics::NewProp_ChatLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPlayerController, nullptr, "ServerToClient_ChatLog", nullptr, nullptr, Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog_Statics::PropPointers), sizeof(CXPlayerController_eventServerToClient_ChatLog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXPlayerController_eventServerToClient_ChatLog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerController::execServerToClient_ChatLog)
{
	P_GET_TARRAY(FChatData,Z_Param_ChatLog);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerToClient_ChatLog_Implementation(Z_Param_ChatLog);
	P_NATIVE_END;
}
// End Class ACXPlayerController Function ServerToClient_ChatLog

// Begin Class ACXPlayerController Function ServerToClient_ChatMessage
struct CXPlayerController_eventServerToClient_ChatMessage_Parms
{
	FString Sender;
	FString Message;
};
static const FName NAME_ACXPlayerController_ServerToClient_ChatMessage = FName(TEXT("ServerToClient_ChatMessage"));
void ACXPlayerController::ServerToClient_ChatMessage(const FString& Sender, const FString& Message)
{
	CXPlayerController_eventServerToClient_ChatMessage_Parms Parms;
	Parms.Sender=Sender;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_ACXPlayerController_ServerToClient_ChatMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Sender;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventServerToClient_ChatMessage_Parms, Sender), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sender_MetaData), NewProp_Sender_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventServerToClient_ChatMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage_Statics::NewProp_Sender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPlayerController, nullptr, "ServerToClient_ChatMessage", nullptr, nullptr, Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage_Statics::PropPointers), sizeof(CXPlayerController_eventServerToClient_ChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXPlayerController_eventServerToClient_ChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerController::execServerToClient_ChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Sender);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerToClient_ChatMessage_Implementation(Z_Param_Sender,Z_Param_Message);
	P_NATIVE_END;
}
// End Class ACXPlayerController Function ServerToClient_ChatMessage

// Begin Class ACXPlayerController
void ACXPlayerController::StaticRegisterNativesACXPlayerController()
{
	UClass* Class = ACXPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientToServer_ChatMessage", &ACXPlayerController::execClientToServer_ChatMessage },
		{ "ServerToClient_ChatLog", &ACXPlayerController::execServerToClient_ChatLog },
		{ "ServerToClient_ChatMessage", &ACXPlayerController::execServerToClient_ChatMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXPlayerController);
UClass* Z_Construct_UClass_ACXPlayerController_NoRegister()
{
	return ACXPlayerController::StaticClass();
}
struct Z_Construct_UClass_ACXPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Player Controller class\n *  Handles input mapping and user interface\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CXPlayerController.h" },
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Player Controller class\nHandles input mapping and user interface" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "Category", "CXPlayerController" },
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSteeringWheelControls_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the optional steering wheel input mapping context will be registered */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the optional steering wheel input mapping context will be registered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringWheelInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional Input Mapping Context to be used for steering wheel input.\n\x09 *  This is added alongside the default Input Mapping Context and does not block other forms of input.\n\x09 */" },
#endif
		{ "EditCondition", "bUseSteeringWheelControls" },
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Input Mapping Context to be used for steering wheel input.\nThis is added alongside the default Input Mapping Context and does not block other forms of input." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehiclePawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the controlled vehicle pawn */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the controlled vehicle pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleUIClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of the UI to spawn */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the UI to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetClass_MetaData[] = {
		{ "Category", "CXPlayerController" },
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static void NewProp_bUseSteeringWheelControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSteeringWheelControls;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringWheelInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VehiclePawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VehicleUIClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NotificationTextWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NotificationTextWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXPlayerController_ClientToServer_ChatMessage, "ClientToServer_ChatMessage" }, // 2980986548
		{ &Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatLog, "ServerToClient_ChatLog" }, // 1282695929
		{ &Z_Construct_UFunction_ACXPlayerController_ServerToClient_ChatMessage, "ServerToClient_ChatMessage" }, // 1536333107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
void Z_Construct_UClass_ACXPlayerController_Statics::NewProp_bUseSteeringWheelControls_SetBit(void* Obj)
{
	((ACXPlayerController*)Obj)->bUseSteeringWheelControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_bUseSteeringWheelControls = { "bUseSteeringWheelControls", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACXPlayerController), &Z_Construct_UClass_ACXPlayerController_Statics::NewProp_bUseSteeringWheelControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSteeringWheelControls_MetaData), NewProp_bUseSteeringWheelControls_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_SteeringWheelInputMappingContext = { "SteeringWheelInputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, SteeringWheelInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringWheelInputMappingContext_MetaData), NewProp_SteeringWheelInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehiclePawn = { "VehiclePawn", nullptr, (EPropertyFlags)0x0124080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, VehiclePawn), Z_Construct_UClass_ACXPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehiclePawn_MetaData), NewProp_VehiclePawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehicleUIClass = { "VehicleUIClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, VehicleUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCXUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleUIClass_MetaData), NewProp_VehicleUIClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_NotificationTextWidgetClass = { "NotificationTextWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, NotificationTextWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetClass_MetaData), NewProp_NotificationTextWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_NotificationTextWidgetInstance = { "NotificationTextWidgetInstance", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, NotificationTextWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetInstance_MetaData), NewProp_NotificationTextWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_NotificationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_bUseSteeringWheelControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_SteeringWheelInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehiclePawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehicleUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_NotificationTextWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_NotificationTextWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXPlayerController_Statics::ClassParams = {
	&ACXPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACXPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::PropPointers),
	0,
	0x009002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXPlayerController()
{
	if (!Z_Registration_Info_UClass_ACXPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXPlayerController.OuterSingleton, Z_Construct_UClass_ACXPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXPlayerController.OuterSingleton;
}
template<> CX_API UClass* StaticClass<ACXPlayerController>()
{
	return ACXPlayerController::StaticClass();
}
void ACXPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_NotificationText(TEXT("NotificationText"));
	static const FName Name_VehiclePawn(TEXT("VehiclePawn"));
	const bool bIsValid = true
		&& Name_NotificationText == ClassReps[(int32)ENetFields_Private::NotificationText].Property->GetFName()
		&& Name_VehiclePawn == ClassReps[(int32)ENetFields_Private::VehiclePawn].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACXPlayerController"));
}
ACXPlayerController::ACXPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXPlayerController);
ACXPlayerController::~ACXPlayerController() {}
// End Class ACXPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_CX_Source_CX_CXPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXPlayerController, ACXPlayerController::StaticClass, TEXT("ACXPlayerController"), &Z_Registration_Info_UClass_ACXPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXPlayerController), 1992980822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CX_Source_CX_CXPlayerController_h_3720742223(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_CX_Source_CX_CXPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CX_Source_CX_CXPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
