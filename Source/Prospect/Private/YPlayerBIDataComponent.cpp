#include "YPlayerBIDataComponent.h"

UYPlayerBIDataComponent::UYPlayerBIDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_haveUsedVehicleOnce = false;
    this->m_timeStampLastTimeLevel = 0.0f;
    this->m_localCacheMountID = -1;
}

void UYPlayerBIDataComponent::TrySendBIHook_MinimapOpen() {
}

void UYPlayerBIDataComponent::ServerSendClientMapLoadingStats_Implementation(const TArray<FYClientMapLoadingStats>& clientMapLoadingStats) {
}
bool UYPlayerBIDataComponent::ServerSendClientMapLoadingStats_Validate(const TArray<FYClientMapLoadingStats>& clientMapLoadingStats) {
    return true;
}

void UYPlayerBIDataComponent::OnVehiclePossesionChanged(AYVehicle* changeVehicle) {
}

void UYPlayerBIDataComponent::OnTakeDamage(const FYDealtDamageData& Data) {
}

void UYPlayerBIDataComponent::OnStartedEscapeTriggering(const FString& escapeShipId) const {
}

void UYPlayerBIDataComponent::OnSpawnLocationSet(FYPlayerSpawnLocationInfo Data, EYCachedSpawnLocationType Type, const FString& contextStr) {
}

void UYPlayerBIDataComponent::OnProspectorLevelXpIncreased(const TArray<FYPlayerReward>& playerRewards) {
}

void UYPlayerBIDataComponent::OnProspectorLevelIncreased(int32 newProspectorLevel) {
}

void UYPlayerBIDataComponent::OnPawnAssigned(APawn* oldPawn, APawn* newPawn) {
}

void UYPlayerBIDataComponent::OnNewLoadTimesData() {
}

void UYPlayerBIDataComponent::OnMatchResultChanged(EYPlayerMatchFinishedResult matchFinishedResult) {
}

void UYPlayerBIDataComponent::OnLeaveGame(FYLeaveGameEvent leaveGameEvent) {
}

void UYPlayerBIDataComponent::OnHandleSystemError() {
}

void UYPlayerBIDataComponent::OnFriendListAction(const TArray<FYFriendAction>& friendAction) {
}

void UYPlayerBIDataComponent::OnEnterEmote() {
}

void UYPlayerBIDataComponent::OnEnterBanner() {
}

void UYPlayerBIDataComponent::OnClientMovementCorrectionCallback() {
}


