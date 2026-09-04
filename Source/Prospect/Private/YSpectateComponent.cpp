#include "YSpectateComponent.h"

UYSpectateComponent::UYSpectateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SpectateNetworkMaxSmoothUpdateDistance = 256.0f;
    this->m_SpectateNetworkNoSmoothUpdateDistance = 384.0f;
    this->m_SpectateNetworkSimulatedSmoothLocationTime = 1.0f;
    this->m_SpectateNetworkSimulatedSmoothRotationTime = 0.330000013f;
    this->m_onFinishMatchFadeInDuration = 1.0f;
    this->m_onSwitchSpectateTargetFadeInDuration = 0.25f;
    this->m_evacSwitchToSpectateTimeDelay = 0.0f;
    this->m_spectateTargetEvacedTimeDelay = 3.0f;
    this->m_spectateTargetDeadTimeDelay = 3.0f;
    this->m_setSpectateTargetTimeDelay = 0.100000001f;
    this->m_spectatePawnAdjustLocationTimeInterval = 0.100000001f;
    this->m_evacSpectateActivityType = EYActivityType::Escape;
    this->m_blockInput = true;
    this->m_playerStateToMakeNetRelevant = NULL;
    this->m_cachedSpectateTargetPlayerState = NULL;
    this->m_cachedSpectateTarget = NULL;
    this->m_cachedPlayerController = NULL;
    this->m_cachedEndOfMatchResultsScreenCameraActor = NULL;
}

void UYSpectateComponent::ViewPrevPlayer() {
}

void UYSpectateComponent::ViewNextPlayer() {
}

void UYSpectateComponent::UpdateSpectatePawnLocation() {
}

void UYSpectateComponent::SpectatorZoomOut() {
}

void UYSpectateComponent::SpectatorZoomIn() {
}

bool UYSpectateComponent::SpectateSpecificPlayer(AYPlayerState* PlayerState) {
    return false;
}

void UYSpectateComponent::SetSpectateViewTargetDelayed() {
}

void UYSpectateComponent::OnSpectateTargetMatchFinishedResult(EYPlayerMatchFinishedResult Result) {
}

void UYSpectateComponent::OnPlayerMatchFinishedResult(EYPlayerMatchFinishedResult Result) {
}

void UYSpectateComponent::OnNetIrrelivantPlayerCharacterSet(AYPlayerCharacter* newPlayerCharacter) {
}

void UYSpectateComponent::OnMatchEscapeSequenceCompleted() {
}

void UYSpectateComponent::OnDeath(UYCharacterDeathComponent* deathComponent) {
}

AActor* UYSpectateComponent::GetSpectateTargetPawn() const {
    return NULL;
}

AYPlayerState* UYSpectateComponent::GetSpectateTarget() const {
    return NULL;
}

void UYSpectateComponent::EnableNetRelevancyForPlayerState_Implementation(AYPlayerState* PlayerState) {
}
bool UYSpectateComponent::EnableNetRelevancyForPlayerState_Validate(AYPlayerState* PlayerState) {
    return true;
}

void UYSpectateComponent::ChangeToEOMViewTarget(EYEndOfMatchView newViewState) {
}

void UYSpectateComponent::ChangeBackToSpectateViewTarget() {
}

void UYSpectateComponent::BindToDelegates() {
}


