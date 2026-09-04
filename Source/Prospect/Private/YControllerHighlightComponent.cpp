#include "YControllerHighlightComponent.h"
#include "Net/UnrealNetwork.h"

UYControllerHighlightComponent::UYControllerHighlightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerHighlightComponent::UnregisterHighlightContextCallbackRowHandle(UObject* objCtx, const FDataTableRowHandle& rowHandle, FYHighlightCallbackEvent Delegate) {
}

void UYControllerHighlightComponent::ServerRemoveHighlightGuid_Implementation(FGuid Guid) {
}

void UYControllerHighlightComponent::ServerNotifyGuid_Implementation(FGuid Guid) {
}

void UYControllerHighlightComponent::ServerHighlightData_Implementation(FYHighlightStateReplicationData Data) {
}

bool UYControllerHighlightComponent::RemoveHighlightWithGuid(UObject* objCtx, FGuid Guid) {
    return false;
}

bool UYControllerHighlightComponent::RemoveHighlightWithData(UObject* objCtx, const FYHighlightStateData& Data) {
    return false;
}

void UYControllerHighlightComponent::RegisterHighlightContextCallbackRowHandle(UObject* objCtx, const FDataTableRowHandle& rowHandle, FYHighlightCallbackEvent Delegate) {
}

void UYControllerHighlightComponent::OnRep_ReplicatedStateDataChanged(TArray<FYHighlightStateReplicationData> oldData) {
}

bool UYControllerHighlightComponent::NotifyInteractionWithRowHandle(UObject* objCtx, FDataTableRowHandle rowHandle) {
    return false;
}

bool UYControllerHighlightComponent::NotifyInteractionWithGuid(UObject* objCtx, FGuid Guid) {
    return false;
}

bool UYControllerHighlightComponent::NotifyInteractionWithData(UObject* objCtx, const FYHighlightStateData& Data) {
    return false;
}

bool UYControllerHighlightComponent::IsContextRowHandleHighlighted(UObject* objCtx, FDataTableRowHandle rowHandle) {
    return false;
}

bool UYControllerHighlightComponent::IsContextHighlighted(UObject* objCtx, const FYHighlightStateData& Data) {
    return false;
}

FGuid UYControllerHighlightComponent::HighlightContextWithRowHandleDelegateBlueprint(UObject* objCtx, FDataTableRowHandle rowHandle, FYHighlightDelegateEvent Delegate) {
    return FGuid{};
}

FGuid UYControllerHighlightComponent::HighlightContextWithRowHandle(UObject* objCtx, FDataTableRowHandle rowHandle) {
    return FGuid{};
}

FGuid UYControllerHighlightComponent::HighlightContextWithDataDelegateBlueprint(UObject* objCtx, const FYHighlightStateData& Data, FYHighlightDelegateEvent Delegate) {
    return FGuid{};
}

FGuid UYControllerHighlightComponent::HighlightContextWithData(UObject* objCtx, const FYHighlightStateData& Data) {
    return FGuid{};
}

bool UYControllerHighlightComponent::FindHighlightDataFromGuidStatic(UObject* objCtx, FGuid relevantGuid, FYHighlightStateData& outData) {
    return false;
}

UYControllerHighlightComponent* UYControllerHighlightComponent::FindControllerHighlightComponent(UObject* objCtx) {
    return NULL;
}

void UYControllerHighlightComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYControllerHighlightComponent, m_replicatedStateData);
}


