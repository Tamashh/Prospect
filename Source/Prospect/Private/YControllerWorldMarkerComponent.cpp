#include "YControllerWorldMarkerComponent.h"
#include "Net/UnrealNetwork.h"

UYControllerWorldMarkerComponent::UYControllerWorldMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_markerTypesTable = NULL;
}

void UYControllerWorldMarkerComponent::YDebugDumpRegisteredWorldMarkerTargets() {
}

void UYControllerWorldMarkerComponent::YDebugDumpActiveWorldMarkers() {
}

void UYControllerWorldMarkerComponent::RemoveWorldMarker(UObject* contextObject, const FGameplayTag markerTargetTag, const FGameplayTag markerTypeTag, bool bRemoveAllTypes, bool bClearStack) {
}

void UYControllerWorldMarkerComponent::OnRep_ReplicatedMarkerData(const TArray<FYActiveWorldMarkerData> oldData) {
}

bool UYControllerWorldMarkerComponent::FindMarkerTypeData(UObject* contextObject, const FGameplayTag markerTypeTag, FYWorldMarkerTypeData& outData) {
    return false;
}

bool UYControllerWorldMarkerComponent::FindLocationForMarker(const FGameplayTag markerTargetTag, FVector& outVector) {
    return false;
}

UYControllerWorldMarkerComponent* UYControllerWorldMarkerComponent::FindControllerWorldMarkerComponent(UObject* contextObject) {
    return NULL;
}

void UYControllerWorldMarkerComponent::AddWorldMarker(UObject* contextObject, const FGameplayTag markerTargetTag, const FGameplayTag markerTypeTag) {
}

void UYControllerWorldMarkerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYControllerWorldMarkerComponent, m_replicatedMarkerData);
}


