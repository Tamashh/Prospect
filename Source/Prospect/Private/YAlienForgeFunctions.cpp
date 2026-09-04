#include "YAlienForgeFunctions.h"

UYAlienForgeFunctions::UYAlienForgeFunctions() {
}

bool UYAlienForgeFunctions::IsPlayerInteractingWithAlienForge(AActor* actorContext) {
    return false;
}

bool UYAlienForgeFunctions::IsItemUsableInAlienForge(const UObject* objectContext, const FYInventoryItem& Item) {
    return false;
}

bool UYAlienForgeFunctions::IsItemConsumedFromForging(const FYAlienForgeProgressDescriptionState& alienForgeProgressDescriptionState, const FYInventoryItem& Item) {
    return false;
}

bool UYAlienForgeFunctions::IsInventoryComponentOwnedByAlienForge(const UYStateInventoryComponent* inventoryComponent) {
    return false;
}

int32 UYAlienForgeFunctions::GetRequiredAmountToForge(const AActor* WorldContext, const FDataTableRowHandle& itemDataTableRowHandle) {
    return 0;
}

bool UYAlienForgeFunctions::GetAlienForgeSettingsRow(const AActor* WorldContext, FYAlienForgeSettingsRow& alienForgeSettingsRow) {
    return false;
}

bool UYAlienForgeFunctions::GetAlienForgeCorrectInventoryStateFromActor(AActor* actorContext, FYAlienForgeUIInventoryState& itemMapping) {
    return false;
}

FYAlienForgeUIInventoryState UYAlienForgeFunctions::GetAlienForgeCorrectInventoryState(const FYPlayerInventory& playerInventory, const TArray<FYInventoryItem>& forgedItems) {
    return FYAlienForgeUIInventoryState{};
}

FYAlienForgeActivityStats UYAlienForgeFunctions::GetAlienForgeBiStruct(const FString& forgeInteractionUniqueId, const FYAlienForgeUIInventoryState& itemsMapping, EYAlienForgeBIAction alienForgeBiAction, const EYAlienForgeCanItemBeForgedState alienForgeCanItemBeForgedState) {
    return FYAlienForgeActivityStats{};
}


