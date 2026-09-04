#include "YPlayerController_Outpost.h"

AYPlayerController_Outpost::AYPlayerController_Outpost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void AYPlayerController_Outpost::OnLoginResponse(EYLoginResult Result) {
}

void AYPlayerController_Outpost::FetchOffers() {
}

void AYPlayerController_Outpost::DebugEnableGameMode(const FName& GameModeName, bool isRanked, bool IsEnabled, bool isAlwaysVisible, bool isTournamentMode) const {
}


