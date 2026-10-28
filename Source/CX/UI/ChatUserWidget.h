#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ScrollBox.h"
#include "Components/EditableTextBox.h"
#include "Components/MultiLineEditableTextBox.h"
#include "ChatUserWidget.generated.h"

UCLASS()
class CX_API UChatUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	void OnNewChatMessage(const FString& Sender, const FString& Message);

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

protected:
	UFUNCTION()
	void OnChatInputTextCommitted(const FText& Text, ETextCommit::Type CommitMethod);

protected:
	//TObjectPtr 이란?
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UEditableTextBox> EditableTextBox_ChatInput;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UScrollBox> ChatScrollBox;
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UMultiLineEditableTextBox> MultilineEditableTextBox_ChatLog;
};