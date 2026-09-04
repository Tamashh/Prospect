#include "YControllerFortunaPassComponent.h"
#include "Net/UnrealNetwork.h"

UYControllerFortunaPassComponent::UYControllerFortunaPassComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerFortunaPassComponent::UpdateFortunaPassModelSeasonXp(const int32 updatedSeasonXp) const {
}

void UYControllerFortunaPassComponent::UpdatedActionsBackendValidationReceived(const FString& UserId) {
}

void UYControllerFortunaPassComponent::TrySendFortunaPassDataToBackend() {
}

void UYControllerFortunaPassComponent::TrackerProgressUpdate(const TArray<FYProgressChange>& actionsProgressIncrease) {
}

void UYControllerFortunaPassComponent::ServerRequestFortunaPassDataFromBackend_Implementation() {
}

void UYControllerFortunaPassComponent::ResetActionsCapBackendValidationReceived(const FString& UserId) {
}

void UYControllerFortunaPassComponent::RequestFortunaPassDataFromBackend(AActor* actorContext) {
}

void UYControllerFortunaPassComponent::RequestBackendToResetActionsDailyCapFromPlayer(AActor* actorContext) {
}

void UYControllerFortunaPassComponent::OnSeasonProgressionUpdateReceived(const FYSeasonProgressionUpdateData& seasonProgressionData) {
}

void UYControllerFortunaPassComponent::OnSeasonProgressionUpdated(const int32 updatedSeasonXp, const FYCompletedActions& updatedCompletedActions) {
}

void UYControllerFortunaPassComponent::OnRep_FortunaPassPlayerDataCurrent() const {
}

void UYControllerFortunaPassComponent::OnRep_FortunaPassPlayerDataBackend() const {
}

int32 UYControllerFortunaPassComponent::GetPlayerPremiumXpBoost() const {
    return 0;
}

FYFortunaPassPlayerData UYControllerFortunaPassComponent::GetInitialData() const {
    return FYFortunaPassPlayerData{};
}

bool UYControllerFortunaPassComponent::GetIfOneDayPassedSinceLastReset(const FDateTime& UtcNow, const FYFortunaPassPlayerData& passPlayerData) {
    return false;
}

FTimespan UYControllerFortunaPassComponent::GetCurrentSeasonRemainingDailyCapTimeUtc() const {
    return FTimespan{};
}

FYFortunaPassPlayerData UYControllerFortunaPassComponent::GetCurrentData() const {
    return FYFortunaPassPlayerData{};
}

UYControllerFortunaPassComponent* UYControllerFortunaPassComponent::FindFortunaPassComponentChecked(AActor* actorContext) {
    return NULL;
}

UYControllerFortunaPassComponent* UYControllerFortunaPassComponent::FindFortunaPassComponent(AActor* actorContext) {
    return NULL;
}

bool UYControllerFortunaPassComponent::ComputeProgressedAndNewData(FYFortunaPassPlayerData& updatedData) const {
    return false;
}

void UYControllerFortunaPassComponent::CacheInitDataReceivedFromBackend(const FString& UserId, const FYFortunaPassPlayerData& initFortunaPassPlayerData) {
}

void UYControllerFortunaPassComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYControllerFortunaPassComponent, m_fortunaPassPlayerDataBackend);
    DOREPLIFETIME(UYControllerFortunaPassComponent, m_fortunaPassPlayerDataCurrent);
}


