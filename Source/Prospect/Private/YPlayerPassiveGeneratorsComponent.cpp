#include "YPlayerPassiveGeneratorsComponent.h"

UYPlayerPassiveGeneratorsComponent::UYPlayerPassiveGeneratorsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYPlayerPassiveGeneratorsComponent::HandleOnFailedCollectingGenerator(const FString& generatorId, const EYClaimGeneratorIncomeStatus Status) {
}

void UYPlayerPassiveGeneratorsComponent::DailyCrateCollectionSuccess(const FString& generatorId, const TArray<FYInventoryItem>& crateItems) {
}


