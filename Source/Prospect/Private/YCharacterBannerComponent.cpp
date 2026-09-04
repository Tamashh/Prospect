#include "YCharacterBannerComponent.h"

UYCharacterBannerComponent::UYCharacterBannerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_localBannerAttachActor = NULL;
    this->m_spawnedBannerAuthority = NULL;
    this->m_spawnedSprayCounter = 0;
}

void UYCharacterBannerComponent::SetBannerLocalAttachState(bool Visible) {
}

void UYCharacterBannerComponent::ServerSpawnSpray_Implementation(FYGlobalVanityItem vanityItem) {
}
bool UYCharacterBannerComponent::ServerSpawnSpray_Validate(FYGlobalVanityItem vanityItem) {
    return true;
}

void UYCharacterBannerComponent::ServerSpawnBanner_Implementation(FYGlobalVanityItem vanityItem) {
}
bool UYCharacterBannerComponent::ServerSpawnBanner_Validate(FYGlobalVanityItem vanityItem) {
    return true;
}

void UYCharacterBannerComponent::OnTransitionFirstPerson() const {
}

void UYCharacterBannerComponent::OnClearBannerState() const {
}

void UYCharacterBannerComponent::OnBannerStateClear(bool wasInterrupted) {
}

void UYCharacterBannerComponent::OnAuthorithySpawnBannerActor(FYGlobalVanityItem vanityItem) {
}

void UYCharacterBannerComponent::OnActivatedBannerState() {
}

void UYCharacterBannerComponent::EnterBannerStateAndCreateBanner(FYGlobalVanityItem vanityItem, EYVanityType vanityType) {
}


