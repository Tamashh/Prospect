#include "YControllerContractsActivesDataComponent.h"
#include "Net/UnrealNetwork.h"

UYControllerContractsActivesDataComponent::UYControllerContractsActivesDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_delayForSendingBackendProgress = 2.0f;
}

void UYControllerContractsActivesDataComponent::TrySendMatchProgressToBackend() {
}

void UYControllerContractsActivesDataComponent::TryConsumeDeadDropItems(AActor* deadDropActor) {
}

void UYControllerContractsActivesDataComponent::TrackerProgressUpdate(const FYContractsProgress& newData) {
}

void UYControllerContractsActivesDataComponent::SetupActiveContractsTutorial(TArray<FYActiveContractInitData> activeContracts) {
}

void UYControllerContractsActivesDataComponent::ServerTryConsumeDeadDropItems_Implementation(AActor* deadDropActor) {
}
bool UYControllerContractsActivesDataComponent::ServerTryConsumeDeadDropItems_Validate(AActor* deadDropActor) {
    return true;
}

void UYControllerContractsActivesDataComponent::ServerRequestPlayerActiveContracts_Implementation() {
}

void UYControllerContractsActivesDataComponent::RequestPlayerCompletedContracts(const FString& UserId) const {
}

void UYControllerContractsActivesDataComponent::OnRep_ContractsCurrentProgressClamp(const FYContractsProgress& contractsCurrentProgressClamp) const {
}

void UYControllerContractsActivesDataComponent::OnRep_ActiveContractsUIData(const FYActiveContractsUIData& activeContractsUIData) const {
}

void UYControllerContractsActivesDataComponent::OnPreDestroy(AYPlayerController* PlayerController) {
}

void UYControllerContractsActivesDataComponent::OnPlayerRemovedAllCompletedContracts(const FString& UserId) {
}

void UYControllerContractsActivesDataComponent::OnPlayerFinishedMatch(EYPlayerMatchFinishedResult newState) {
}

void UYControllerContractsActivesDataComponent::OnPlayerCompletedContractsDataReceived(const FString& UserId, const FYGetCompletedContractsResult& completedContracts) {
}

void UYControllerContractsActivesDataComponent::OnCheatCompleteContract(const FString& contractId) {
}

void UYControllerContractsActivesDataComponent::OnCharacterVisitedArea(UYCharacterLocationComponent* Component, FName Tag) {
}

bool UYControllerContractsActivesDataComponent::IsContractActive(const FDataTableRowHandle& rowHandle) const {
    return false;
}

bool UYControllerContractsActivesDataComponent::HasContractProgressedDuringMatch(const FString& contractId) {
    return false;
}

void UYControllerContractsActivesDataComponent::HandlePlayerContractClaimFail(const FString& UserId, const FString& contractId, const EYClaimContractRewardsStatus contractRewardsStatus) {
}

void UYControllerContractsActivesDataComponent::HandlePlayerContractClaimed(const FYClaimedContractBackendData& claimedContractBackendData) {
}

void UYControllerContractsActivesDataComponent::HandlePlayerContractCancelled(const FString& UserId, const FString& cancelledContractId) {
}

void UYControllerContractsActivesDataComponent::HandlePlayerContractActivated(const FYActiveContractInitData& activeContractInitData) {
}

void UYControllerContractsActivesDataComponent::HandlePlayerActiveContractsReceived(const FYActiveContractsInitData& activeContractsInit) {
}

bool UYControllerContractsActivesDataComponent::GetIsContractDataFullySetup() const {
    return false;
}

FYGetCompletedContractsResult UYControllerContractsActivesDataComponent::GetCompletedContractData() const {
    return FYGetCompletedContractsResult{};
}

FYContractsProgress UYControllerContractsActivesDataComponent::GetCachedBackendProgressClamped() const {
    return FYContractsProgress{};
}

FYActiveContractsUIData UYControllerContractsActivesDataComponent::GetCachedActiveContractsUIDataUnfiltered() const {
    return FYActiveContractsUIData{};
}

FYActiveContractsUIData UYControllerContractsActivesDataComponent::GetCachedActiveContractsUIDataFiltered() const {
    return FYActiveContractsUIData{};
}

FYContractsProgress UYControllerContractsActivesDataComponent::GetCachedActiveContractsProgressClamped() const {
    return FYContractsProgress{};
}

bool UYControllerContractsActivesDataComponent::GetCachedActiveContractProgressClamped(const FString& contractId, FYContractProgress& activeContractCurrentProgressClamp) const {
    return false;
}

UYControllerContractsActivesDataComponent* UYControllerContractsActivesDataComponent::FindContractsActivesDataCompChecked(AActor* actorContext) {
    return NULL;
}

UYControllerContractsActivesDataComponent* UYControllerContractsActivesDataComponent::FindContractsActivesDataComp(AActor* actorContext) {
    return NULL;
}

EYContractStatus UYControllerContractsActivesDataComponent::DetermineContractStatus(FDataTableRowHandle rowHandle) const {
    return EYContractStatus::Invalid;
}

void UYControllerContractsActivesDataComponent::DebugSendContractProgressToBackend() {
}

bool UYControllerContractsActivesDataComponent::DebugMaxOutContractProgress(const FString& contractIdMaxOut, bool resetProgress) {
    return false;
}

void UYControllerContractsActivesDataComponent::ClientDeadDropDepositResult_Implementation(EYDeadDropDepositResult Result) {
}
bool UYControllerContractsActivesDataComponent::ClientDeadDropDepositResult_Validate(EYDeadDropDepositResult Result) {
    return true;
}

void UYControllerContractsActivesDataComponent::ActivesStateUpdate(const FYActiveContractsUIData& newData) {
}

void UYControllerContractsActivesDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYControllerContractsActivesDataComponent, m_activeContractsUIData);
    DOREPLIFETIME(UYControllerContractsActivesDataComponent, m_contractsBackendProgressClamp);
    DOREPLIFETIME(UYControllerContractsActivesDataComponent, m_contractsCurrentProgressClamp);
}


