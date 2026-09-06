#include "YControllerGeneratorsComponent.h"

UYControllerGeneratorsComponent::UYControllerGeneratorsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerGeneratorsComponent::HandleOnFailedCollectingGenerator(const FString& generatorId, const EYClaimGeneratorIncomeStatus Status) {
}

void UYControllerGeneratorsComponent::DailyCrateCollectionSuccess(const FString& generatorId, const TArray<FYInventoryItem>& crateItems) {
}
