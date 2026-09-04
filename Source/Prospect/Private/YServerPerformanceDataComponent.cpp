#include "YServerPerformanceDataComponent.h"
#include "Net/UnrealNetwork.h"

UYServerPerformanceDataComponent::UYServerPerformanceDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYServerPerformanceDataComponent::DisableHitchDump(AYPlayerController* PlayerController) const {
}

void UYServerPerformanceDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYServerPerformanceDataComponent, m_replicatedData);
}


