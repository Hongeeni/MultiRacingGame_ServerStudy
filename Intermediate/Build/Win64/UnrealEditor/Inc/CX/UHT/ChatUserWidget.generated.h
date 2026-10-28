// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ChatUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CX_ChatUserWidget_generated_h
#error "ChatUserWidget.generated.h already included, missing '#pragma once' in ChatUserWidget.h"
#endif
#define CX_ChatUserWidget_generated_h

#define FID_CX_Source_CX_UI_ChatUserWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatInputTextCommitted);


#define FID_CX_Source_CX_UI_ChatUserWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChatUserWidget(); \
	friend struct Z_Construct_UClass_UChatUserWidget_Statics; \
public: \
	DECLARE_CLASS(UChatUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(UChatUserWidget)


#define FID_CX_Source_CX_UI_ChatUserWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChatUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChatUserWidget(UChatUserWidget&&); \
	UChatUserWidget(const UChatUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChatUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChatUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChatUserWidget) \
	NO_API virtual ~UChatUserWidget();


#define FID_CX_Source_CX_UI_ChatUserWidget_h_10_PROLOG
#define FID_CX_Source_CX_UI_ChatUserWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CX_Source_CX_UI_ChatUserWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CX_Source_CX_UI_ChatUserWidget_h_13_INCLASS_NO_PURE_DECLS \
	FID_CX_Source_CX_UI_ChatUserWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class UChatUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CX_Source_CX_UI_ChatUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
