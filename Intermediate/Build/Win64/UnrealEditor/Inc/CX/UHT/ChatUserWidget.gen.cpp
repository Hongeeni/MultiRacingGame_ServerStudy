// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/UI/ChatUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatUserWidget() {}

// Begin Cross Module References
CX_API UClass* Z_Construct_UClass_UChatUserWidget();
CX_API UClass* Z_Construct_UClass_UChatUserWidget_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class UChatUserWidget Function OnChatInputTextCommitted
struct Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics
{
	struct ChatUserWidget_eventOnChatInputTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ChatUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChatUserWidget_eventOnChatInputTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ChatUserWidget_eventOnChatInputTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChatUserWidget, nullptr, "OnChatInputTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::ChatUserWidget_eventOnChatInputTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::ChatUserWidget_eventOnChatInputTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UChatUserWidget::execOnChatInputTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChatInputTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UChatUserWidget Function OnChatInputTextCommitted

// Begin Class UChatUserWidget
void UChatUserWidget::StaticRegisterNativesUChatUserWidget()
{
	UClass* Class = UChatUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnChatInputTextCommitted", &UChatUserWidget::execOnChatInputTextCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChatUserWidget);
UClass* Z_Construct_UClass_UChatUserWidget_NoRegister()
{
	return UChatUserWidget::StaticClass();
}
struct Z_Construct_UClass_UChatUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/ChatUserWidget.h" },
		{ "ModuleRelativePath", "UI/ChatUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_ChatInput_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TObjectPtr \xec\x9d\xb4\xeb\x9e\x80?\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ChatUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TObjectPtr \xec\x9d\xb4\xeb\x9e\x80?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ChatUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultilineEditableTextBox_ChatLog_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ChatUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_ChatInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatScrollBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MultilineEditableTextBox_ChatLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UChatUserWidget_OnChatInputTextCommitted, "OnChatInputTextCommitted" }, // 1006695956
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChatUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChatUserWidget_Statics::NewProp_EditableTextBox_ChatInput = { "EditableTextBox_ChatInput", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChatUserWidget, EditableTextBox_ChatInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_ChatInput_MetaData), NewProp_EditableTextBox_ChatInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChatUserWidget_Statics::NewProp_ChatScrollBox = { "ChatScrollBox", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChatUserWidget, ChatScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatScrollBox_MetaData), NewProp_ChatScrollBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChatUserWidget_Statics::NewProp_MultilineEditableTextBox_ChatLog = { "MultilineEditableTextBox_ChatLog", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UChatUserWidget, MultilineEditableTextBox_ChatLog), Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultilineEditableTextBox_ChatLog_MetaData), NewProp_MultilineEditableTextBox_ChatLog_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChatUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatUserWidget_Statics::NewProp_EditableTextBox_ChatInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatUserWidget_Statics::NewProp_ChatScrollBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatUserWidget_Statics::NewProp_MultilineEditableTextBox_ChatLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChatUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UChatUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChatUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChatUserWidget_Statics::ClassParams = {
	&UChatUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UChatUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UChatUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChatUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UChatUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChatUserWidget()
{
	if (!Z_Registration_Info_UClass_UChatUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChatUserWidget.OuterSingleton, Z_Construct_UClass_UChatUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChatUserWidget.OuterSingleton;
}
template<> CX_API UClass* StaticClass<UChatUserWidget>()
{
	return UChatUserWidget::StaticClass();
}
UChatUserWidget::UChatUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChatUserWidget);
UChatUserWidget::~UChatUserWidget() {}
// End Class UChatUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_CX_Source_CX_UI_ChatUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChatUserWidget, UChatUserWidget::StaticClass, TEXT("UChatUserWidget"), &Z_Registration_Info_UClass_UChatUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChatUserWidget), 504769573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CX_Source_CX_UI_ChatUserWidget_h_1774071065(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_CX_Source_CX_UI_ChatUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CX_Source_CX_UI_ChatUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
