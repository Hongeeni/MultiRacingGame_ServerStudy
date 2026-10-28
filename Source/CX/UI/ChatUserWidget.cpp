#include "ChatUserWidget.h"
#include "CXPlayerController.h"

void UChatUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (EditableTextBox_ChatInput->OnTextCommitted.IsAlreadyBound(this, &UChatUserWidget::OnChatInputTextCommitted) == false)
	{
		EditableTextBox_ChatInput->OnTextCommitted.AddDynamic(this, &UChatUserWidget::OnChatInputTextCommitted);
	}
}

void UChatUserWidget::NativeDestruct()
{
	if (EditableTextBox_ChatInput->OnTextCommitted.IsAlreadyBound(this, &UChatUserWidget::OnChatInputTextCommitted) == true)
	{
		EditableTextBox_ChatInput->OnTextCommitted.RemoveDynamic(this, &UChatUserWidget::OnChatInputTextCommitted);
	}

	Super::NativeDestruct();
}

void UChatUserWidget::OnNewChatMessage(const FString& Sender, const FString& Message)
{
	FString NewMessage = Sender + TEXT(": ") + Message;
	FString OldMessage =  MultilineEditableTextBox_ChatLog->GetText().ToString();
	OldMessage += '\n';
	FText TotalMessage = FText::FromString(OldMessage + NewMessage);

	MultilineEditableTextBox_ChatLog->SetText(TotalMessage);
}

void UChatUserWidget::OnChatInputTextCommitted(const FText& Text, ETextCommit::Type CommitMethod)
{
	if (CommitMethod == ETextCommit::OnEnter)
	{
		if (Text.IsEmpty() == false)
		{
			FString ChatMessage = Text.ToString();
			EditableTextBox_ChatInput->SetText(FText::GetEmpty());

			if (ACXPlayerController* PlayerController = GetOwningPlayer<ACXPlayerController>())
			{
				PlayerController->ClientToServer_ChatMessage(ChatMessage);
			}
		}
	}
}