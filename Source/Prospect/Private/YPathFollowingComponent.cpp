#include "YPathFollowingComponent.h"

UYPathFollowingComponent::UYPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

TEnumAsByte<EPathFollowingResult::Type> UYPathFollowingComponent::GetLatestPathFollowingResult() {
    return EPathFollowingResult::Success;
}

void UYPathFollowingComponent::GetDebugInfoAboutLatestPathFollowingResult(FString& outInfoString) {
}


