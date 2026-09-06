#include "YControllerRewardsUIComponent.h"

UYControllerRewardsUIComponent::UYControllerRewardsUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UYControllerRewardsUIComponent* UYControllerRewardsUIComponent::FindControllerRewardsUIComponent(UObject* contextObject) {
    return NULL;
}

bool UYControllerRewardsUIComponent::BP_IsAnyRewardsWidgetActive_Implementation() const {
    return false;
}
