#include "YPlatformAnalyticsComponent.h"

UYPlatformAnalyticsComponent::UYPlatformAnalyticsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYPlatformAnalyticsComponent::OnAccountLinkingResult(const FString& targetPlatformUserId, const FString& targetUserIdPlayFabMaster, const EYAccountLinkingResultCode resultCode) {
}


