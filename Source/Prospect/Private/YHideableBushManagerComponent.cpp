#include "YHideableBushManagerComponent.h"

UYHideableBushManagerComponent::UYHideableBushManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UYHideableBushManagerComponent::IsSightObstructed(FVector fromLocation, FVector toLocation) {
    return false;
}


