#include "YWidget_ItemContainer.h"
#include "Templates/SubclassOf.h"

UYWidget_ItemContainer::UYWidget_ItemContainer() {
    this->m_itemType = EYItemType::None;
    this->m_itemRarity = EYItemRarityType::Invalid;
    this->m_weight = 0.0f;
    this->m_resetItemType = false;
    this->m_purchaseAmount = 1;
    this->m_maxPurchaseAmount = 100;
    this->m_purchasePrice = -1;
    this->m_isSelected = false;
    this->m_isItemActive = true;
}

bool UYWidget_ItemContainer::ShouldShowWeight() {
    return false;
}

bool UYWidget_ItemContainer::ShouldAllowInspectionOnClick() const {
    return false;
}

void UYWidget_ItemContainer::SetupFromShopOfferId(const FString& OfferId) {
}

void UYWidget_ItemContainer::SetupFromInventoryItem(const FYInventoryItem& inventoryItem) {
}

void UYWidget_ItemContainer::SetIsSelected(bool IsSelected) {
}

void UYWidget_ItemContainer::SetIsItemActive(bool IsActive) {
}

void UYWidget_ItemContainer::ResetToDefault(bool resetRarityToo) {
}

void UYWidget_ItemContainer::RemoveItemComponent(UYWidget_ItemComponentBase* itemComponent) {
}

bool UYWidget_ItemContainer::IsShopOffer() const {
    return false;
}

bool UYWidget_ItemContainer::IsItemSet() const {
    return false;
}

bool UYWidget_ItemContainer::IsItemInstanceEqualToAssignedInventoryItem(const FYInventoryItem& Item) const {
    return false;
}

bool UYWidget_ItemContainer::IsItemEmpty() const {
    return false;
}

bool UYWidget_ItemContainer::IsItemBlueprint() const {
    return false;
}

bool UYWidget_ItemContainer::IsItemActive() const {
    return false;
}

bool UYWidget_ItemContainer::IsFactionStoreItem() const {
    return false;
}

int32 UYWidget_ItemContainer::GetPrice() const {
    return 0;
}

int32 UYWidget_ItemContainer::GetFactionStorePrice() const {
    return 0;
}

int32 UYWidget_ItemContainer::GetFactionStoreAmountPerPurchase() const {
    return 0;
}

FString UYWidget_ItemContainer::GetCustomOrBaseItemID() const {
    return TEXT("");
}

FYShopItem UYWidget_ItemContainer::GetCorrespondingShopItemType() const {
    return FYShopItem{};
}

UYWidget_ItemComponentBase* UYWidget_ItemContainer::GetComponentOfClass(TSubclassOf<UYWidget_ItemComponentBase> itemComponentClass) const {
    return NULL;
}

EYPlayerSetType UYWidget_ItemContainer::GetAssignedPlayerSetType() {
    return EYPlayerSetType::None;
}

FYInventoryItem UYWidget_ItemContainer::GetAssignedInventoryItem() const {
    return FYInventoryItem{};
}

void UYWidget_ItemContainer::BP_SetupFromItemContainerData(const FYItemContainerData& itemContainerData) {
}

void UYWidget_ItemContainer::BP_SetupFromBlueprintId(const FName& blueprintId, EYItemRarityType itemRarity, const FString& shopItemBelongsTo, const FString& relatedId) {
}

void UYWidget_ItemContainer::BP_SetupFromBaseItemIdWithRelatedItem(const FString& baseItemId, const FString& itemBackendId, const FString& relatedBaseItemId, const FString& relatedCustomItemId) {
}

void UYWidget_ItemContainer::BP_SetupFromBaseItemId(const FString& baseItemId, const FString& itemBackendId, const EYItemRarityType itemRarity) {
}

void UYWidget_ItemContainer::BP_SetupBackendItem(const FString& baseItemId, const FString& itemBackendId, const FString& shopItemBelongsTo, const EYItemRarityType itemRarity, const int32 repeatTimes) {
}




UYWidget_ItemComponentBase* UYWidget_ItemContainer::AddItemComponent(TSubclassOf<UYWidget_ItemComponentBase> itemComponentClass, bool Visible) {
    return NULL;
}


