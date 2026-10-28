#include "Subsystem/ChatSubsystem.h"

void UChatSubsystem::AddChatMessage(const FString& Sender, const FString& Message)
{
	if (ChatLog.Num() > MaxChatLogSize)
	{
		ChatLog.RemoveAt(0);
	}

	ChatLog.Emplace(Sender, Message);
}
