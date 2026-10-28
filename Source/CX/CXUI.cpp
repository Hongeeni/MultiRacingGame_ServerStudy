#include "CXUI.h"
#include "UI/ChatUserWidget.h"

void UCXUI::OnNewChatMessage(const FString& Sender, const FString& Message)
{
	UI_Chat->OnNewChatMessage(Sender, Message);
}

void UCXUI::UpdateSpeed(float NewSpeed)
{
	// format the speed to KPH or MPH
	float FormattedSpeed = FMath::Abs(NewSpeed) * (bIsMPH ? 0.022f : 0.036f);

	// call the Blueprint handler
	OnSpeedUpdate(FormattedSpeed);
}

void UCXUI::UpdateGear(int32 NewGear)
{
	// call the Blueprint handler
	OnGearUpdate(NewGear);
}