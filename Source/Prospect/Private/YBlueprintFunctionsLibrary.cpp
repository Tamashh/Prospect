#include "YBlueprintFunctionsLibrary.h"

UYBlueprintFunctionsLibrary::UYBlueprintFunctionsLibrary() {
}

bool UYBlueprintFunctionsLibrary::TryGetItemTextDataFromBlueprintRowHandle(UObject* objCtx, const FDataTableRowHandle& bpRowHandle, FYCraftSuccessfulPopupText& craftSuccessfulPopupText) {
    return false;
}

bool UYBlueprintFunctionsLibrary::TryGetDeviceTypeTextFromItemType(UObject* objCtx, const FYItemDataTableRowBase& itemDataTableRowBase, FYCraftSuccessfulPopupText& FYCraftSuccessfulPopupText) {
    return false;
}

bool UYBlueprintFunctionsLibrary::IsAnimationPreview(AActor* Actor) {
    return false;
}

FString UYBlueprintFunctionsLibrary::GetCraftingStationRowName() {
    return TEXT("");
}

bool UYBlueprintFunctionsLibrary::FireShot() {
    return false;
}

int32 UYBlueprintFunctionsLibrary::FindPlayerFactionLevelForFaction(AActor* actorContext, const FString& factionId) {
    return 0;
}

bool UYBlueprintFunctionsLibrary::FindAllShopHandleFromShopRow(UDataTable* factionDataTable, bool excludeQuickShop, TArray<FDataTableRowHandle>& outRowHandles) {
    return false;
}

bool UYBlueprintFunctionsLibrary::DoesShopStringCorrespondToAFaction(const FString& shopId) {
    return false;
}

bool UYBlueprintFunctionsLibrary::DoesShopNameCorrespondToAFaction(const FName& shopId) {
    return false;
}

FText UYBlueprintFunctionsLibrary::CraftingUnavailableReasonToText(EYCraftingUnavailableReason unavailableReason) {
    return FText::GetEmpty();
}

bool UYBlueprintFunctionsLibrary::CanSkipItemCrafting(AActor* wlrdCtx, const FString& callerContextString, const FYShopItem& shopItem) {
    return false;
}

bool UYBlueprintFunctionsLibrary::CanCraftItem(AActor* wlrdCtx, const FString& callerContextString, const FYShopItem& shopItem, EYCraftingUnavailableReason& outUnavailableReason, const int32 repeatTimes) {
    return false;
}


