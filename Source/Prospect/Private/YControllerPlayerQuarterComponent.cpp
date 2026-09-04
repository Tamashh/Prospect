#include "YControllerPlayerQuarterComponent.h"
#include "Net/UnrealNetwork.h"

UYControllerPlayerQuarterComponent::UYControllerPlayerQuarterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_playerLeveledUp = false;
    this->m_bIsInPlayerQuarters = false;
}

void UYControllerPlayerQuarterComponent::UnlockUpgradeRequestsAndBroadcast() {
}

void UYControllerPlayerQuarterComponent::SetIsInPlayerQuarters(bool NewIsInPlayerQuarters) {
}

void UYControllerPlayerQuarterComponent::OnUpgradeCompletedTimer() {
}

void UYControllerPlayerQuarterComponent::OnTechTreeNodesAvailable(const FString& UserId, const TArray<FYTechTreeNodeStatus>& techTreeNodes, const int32& remainingTimeInSeconds) {
}

void UYControllerPlayerQuarterComponent::OnRep_IsInPlayerQuarters() {
}

void UYControllerPlayerQuarterComponent::OnPlayerQuarterUpgradeCompletedTimer() {
}

void UYControllerPlayerQuarterComponent::OnPlayerQuartersLevelAvailable(const FYPlayerQuarterStatus& playerQuarterStatus, const int32& remainingTimeInSeconds) {
}

void UYControllerPlayerQuarterComponent::OnPlayerQuarterPurchaseFailed(const FString& Error) {
}

void UYControllerPlayerQuarterComponent::NotifyTechTreeNodeSelect(const FDataTableRowHandle& rowHandle) const {
}

void UYControllerPlayerQuarterComponent::NotifyTechTreeCategoryOpen(EYTechtreeCategoryType Category) const {
}

bool UYControllerPlayerQuarterComponent::IsInPlayerQuarters() const {
    return false;
}

UYControllerPlayerQuarterComponent* UYControllerPlayerQuarterComponent::FindControllerPlayerQuarterComponent(UObject* objCtx) {
    return NULL;
}

void UYControllerPlayerQuarterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYControllerPlayerQuarterComponent, m_bIsInPlayerQuarters);
}


