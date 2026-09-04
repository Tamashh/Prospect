#include "YControllerCraftingComponent.h"

UYControllerCraftingComponent::UYControllerCraftingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerCraftingComponent::SetCraftingInProgress(const FString& UserId, const FYCraftingInProgressData& craftingInProgressData) {
}

void UYControllerCraftingComponent::SellItems(const TArray<FString>& idsToScrap, const FName& factionId) {
}

void UYControllerCraftingComponent::PurchaseItem(const FYShopItem& shopItem, const int32 repeatTimes) {
}

void UYControllerCraftingComponent::OnItemScrappedResult(const FString& Error) {
}

bool UYControllerCraftingComponent::IsCraftingInProgress() const {
    return false;
}

int32 UYControllerCraftingComponent::GetRemainingTimeSeconds() const {
    return 0;
}

FString UYControllerCraftingComponent::GetItemBeingCrafted() const {
    return TEXT("");
}

UYControllerCraftingComponent* UYControllerCraftingComponent::FindCraftingComponentChecked(UObject* objectContext) {
    return NULL;
}

UYControllerCraftingComponent* UYControllerCraftingComponent::FindCraftingComponent(UObject* objectContext) {
    return NULL;
}

void UYControllerCraftingComponent::BackendResponseReceivedForItemPurchased(EYPurchaseWeaponShopItemStatus Status) {
}

void UYControllerCraftingComponent::BackendResponseReceivedForItemCraftingStarted(EYStartItemCraftingResultStatus Status) {
}

void UYControllerCraftingComponent::BackendResponseReceivedForItemCrafted(const bool craftingFailed) {
}

void UYControllerCraftingComponent::BackendClaimedItemReceived(const FYCraftedBlueprintInfo& craftedBlueprintInfo) {
}


