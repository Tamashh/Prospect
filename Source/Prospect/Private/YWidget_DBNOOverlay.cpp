#include "YWidget_DBNOOverlay.h"

UYWidget_DBNOOverlay::UYWidget_DBNOOverlay() {
}

void UYWidget_DBNOOverlay::OnReviveStatusChanged(UYObjectInteractionComponent* objectInteractionComponent, bool isBegingInteracted) {
}

void UYWidget_DBNOOverlay::OnDBNODeactivated(bool wasInterrupted) {
}

void UYWidget_DBNOOverlay::OnDBNOActivated() {
}

FText UYWidget_DBNOOverlay::GetDBNOReviveTimeLeft() {
    return FText::GetEmpty();
}

float UYWidget_DBNOOverlay::GetDBNOReviveProgressPercent() {
    return 0.0f;
}



void UYWidget_DBNOOverlay::BindToLocalCharacter(APawn* oldPawn, APawn* newPawn) {
}


