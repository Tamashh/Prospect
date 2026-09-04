#include "YRebuildNavMeshReportComponent.h"

UYRebuildNavMeshReportComponent::UYRebuildNavMeshReportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_tagWhiteListedNavMeshRebuilder = TEXT("NavMeshRebuildInvoker");
}

void UYRebuildNavMeshReportComponent::OnNavMeshRelevantComponentUpdated(UObject* invoker) {
}

void UYRebuildNavMeshReportComponent::OnMatchStateUpdated(EYMatchState matchState) {
}


