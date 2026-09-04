#include "YGameSquadsComponent.h"

UYGameSquadsComponent::UYGameSquadsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UYGameSquadsComponent::HasSquadWithPlayer(AYPlayerState* PlayerState) const {
    return false;
}

bool UYGameSquadsComponent::HasSquadWithId(const FString& squadId) const {
    return false;
}

FYSquadInfo UYGameSquadsComponent::GetSquadFromPlayer(const AYPlayerState* PlayerState) const {
    return FYSquadInfo{};
}

FYSquadInfo UYGameSquadsComponent::GetSquadFromId(const FString& squadId) const {
    return FYSquadInfo{};
}


