#include "YControllerCustomizationPreviewComponent.h"

UYControllerCustomizationPreviewComponent::UYControllerCustomizationPreviewComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerCustomizationPreviewComponent::TryChangeCameraActorsBasedOnActiveScene(AActor* relevantActor, const FString& callerContext) {
}

void UYControllerCustomizationPreviewComponent::SetWorldSpaceCustomizationLocationStatic(const UObject* objCtx, const FTransform& Location) {
}

void UYControllerCustomizationPreviewComponent::SetSubScreenStatic(const AActor* contextActor, const FString& secondaryScreen) {
}

void UYControllerCustomizationPreviewComponent::SetItemIdStatic(const AActor* contextActor, const FString& baseItemId, const FString& customItemID, const FString& callerContext) {
}

void UYControllerCustomizationPreviewComponent::SetCustomizationModeStatic(const UObject* objCtx, const FString& callerContext, EYCustomizationMode Mode, bool rotationEnabled) {
}

void UYControllerCustomizationPreviewComponent::SetCharacterCustomizationCategoryPreviewStatic(const UObject* objCtx, EYCustomizationCategory Category) {
}

void UYControllerCustomizationPreviewComponent::OnSceneAddedCallback(FDataTableRowHandle sceneRowHandle) {
}

void UYControllerCustomizationPreviewComponent::OnCustomizationModeActorsChanged(EYCustomizationMode modeChange, bool stored) {
}

void UYControllerCustomizationPreviewComponent::HandleOnCustomizationCategoryChanged(EYCustomizationCategory newCategory, EYCustomizationMode Mode) const {
}

void UYControllerCustomizationPreviewComponent::HandleCustomizationModeStateChanged(EYCustomizationMode Mode, bool IsActive, const FString& callerContext) {
}

FYControllerCustomizationState UYControllerCustomizationPreviewComponent::GetCustomizationStateStatic(const UObject* objCtx) {
    return FYControllerCustomizationState{};
}

void UYControllerCustomizationPreviewComponent::ForceRetriggerOfActiveCustomizationMode(const UObject* objCtx, const FString& callerContext) {
}

UYControllerCustomizationPreviewComponent* UYControllerCustomizationPreviewComponent::FindCustomizationPreviewComponent(const UObject* objCtx) {
    return NULL;
}


