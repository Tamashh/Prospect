#include "YStateFreeLoadoutComponent.h"

UYStateFreeLoadoutComponent::UYStateFreeLoadoutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_isFreeLoadoutFilterSelected = false;
}

void UYStateFreeLoadoutComponent::UpdateAvailableFreeLoadout(int32 newRandomSeed, const FYTimestamp& loadoutExpirationTimeSecondsUtc) {
}

void UYStateFreeLoadoutComponent::SetFreeLoadoutInfo(const FYBackendFreeLoadout& freeLoadoutBackendData) {
}

void UYStateFreeLoadoutComponent::OnSetFreeLoadoutFilterSelection(bool IsSelected) {
}

void UYStateFreeLoadoutComponent::OnRefreshTimerElapsed() {
}

void UYStateFreeLoadoutComponent::HandleFreeLoadoutActivated(bool IsActive) {
}

UYStateFreeLoadoutComponent* UYStateFreeLoadoutComponent::FindStateFreeLoadoutComponent(AActor* actorContext) {
    return NULL;
}
