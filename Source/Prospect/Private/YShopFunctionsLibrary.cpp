#include "YShopFunctionsLibrary.h"

UYShopFunctionsLibrary::UYShopFunctionsLibrary() {
}

bool UYShopFunctionsLibrary::StartPlatformOfferCheckout(UObject* objectContext, const FString& bundleRowId) {
    return false;
}

bool UYShopFunctionsLibrary::RedeemCoupon(UObject* objectContext, const FString& CouponCode) {
    return false;
}

bool UYShopFunctionsLibrary::PurchasePlayfabShopItem(UObject* objectContext, const FYPlayfabStoreItemEntry& storeItem) {
    return false;
}

FText UYShopFunctionsLibrary::PromotionTypeToText(EYPromotionType promotionType) {
    return FText::GetEmpty();
}

EYCurrencyType UYShopFunctionsLibrary::PlayfabCurrencyToCurrencyType(const FString& currencyName) {
    return EYCurrencyType::Invalid;
}

void UYShopFunctionsLibrary::OpenPlatformItemShopOverlay(UObject* objectContext) {
}

bool UYShopFunctionsLibrary::IsStoreItemRealMoney(const FYPlayfabStoreItemEntry& Item) {
    return false;
}

bool UYShopFunctionsLibrary::IsOneTimePurchaseItemAlreadyOwned(UObject* objectContext, const FString& ItemId) {
    return false;
}

bool UYShopFunctionsLibrary::IsOneTimePurchaseItem(const UObject* objectContext, const FString& ItemId) {
    return false;
}

float UYShopFunctionsLibrary::GetValRelativePosToMaxValRoundedToNextChunk(float CurrentValue, float MaxValue) {
    return 0.0f;
}

int64 UYShopFunctionsLibrary::GetRealMoneyPriceAsValue(UObject* objectContext, const FString& itemOrBundleId, const FString& contextString, bool useOverridenPrice) {
    return 0;
}

FText UYShopFunctionsLibrary::GetRealMoneyPriceAsText(UObject* objectContext, const FString& itemOrBundleId, const FString& contextString, bool useOverridenPrice) {
    return FText::GetEmpty();
}

FText UYShopFunctionsLibrary::GetPlayFabStoreName(const UObject* objectContext, const FString& StoreId, const FString& contextString) {
    return FText::GetEmpty();
}

EYPlayFabStoreCategory UYShopFunctionsLibrary::GetPlayFabStoreCategory(const UObject* objectContext, const FString& StoreId, const FString& contextString) {
    return EYPlayFabStoreCategory::None;
}

int32 UYShopFunctionsLibrary::GetOverridenPrice(const UObject* objectContext, const FString& itemOrBundleId, const FString& currencyId, const FString& StoreId, const FString& contextString) {
    return 0;
}

FText UYShopFunctionsLibrary::GetName(const UObject* objectContext, const FString& itemOrBundleId, const FString& contextString) {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UYShopFunctionsLibrary::GetImage(const UObject* objectContext, const FString& itemOrBundleId, const FString& contextString) {
    return NULL;
}

FString UYShopFunctionsLibrary::GetFormattedShopItemPrices(const FYPlayfabStoreItemEntry& Item) {
    return TEXT("");
}

FString UYShopFunctionsLibrary::GetFormattedPurchaseFlowEvent(const FYPurchaseFlowEvent& purchaseFlowEvent) {
    return TEXT("");
}

FString UYShopFunctionsLibrary::GetFormattedPlayfabStoreItemEntry(const FYPlayfabStoreItemEntry& Item) {
    return TEXT("");
}

FText UYShopFunctionsLibrary::GetFlavor(const UObject* objectContext, const FString& itemOrBundleId, const FString& contextString) {
    return FText::GetEmpty();
}

FYCurrencyItem UYShopFunctionsLibrary::GetEffectiveShopItemPrice(const FYPlayfabStoreItemEntry& Item) {
    return FYCurrencyItem{};
}

FYCostEntryRow UYShopFunctionsLibrary::GetDiscountedCostEntry(const FYCostEntryRow& currentCostEntryRow, const float relativePosToMaxValRoundedToNextChunk) {
    return FYCostEntryRow{};
}

FText UYShopFunctionsLibrary::GetDescription(const UObject* objectContext, const FString& itemOrBundleId, const FString& contextString) {
    return FText::GetEmpty();
}

int32 UYShopFunctionsLibrary::GetDefaultPrice(const UObject* objectContext, const FString& itemOrBundleId, EYCurrencyType currencyType, const FString& contextString) {
    return 0;
}

bool UYShopFunctionsLibrary::FindTags(const UObject* objectContext, const FString& itemOrBundleId, const FString& StoreId, TArray<FString>& outTags, const FString& contextString) {
    return false;
}

bool UYShopFunctionsLibrary::FindStoreItems(const UObject* objectContext, const FString& StoreId, FYPlayfabStoreItemsResult& outStoreItems, const FString& contextString) {
    return false;
}

bool UYShopFunctionsLibrary::FindStoreItem(const UObject* objectContext, const FString& itemOrBundleId, const FString& StoreId, FYPlayfabStoreItemEntry& outStoreItem, const FString& contextString) {
    return false;
}

bool UYShopFunctionsLibrary::FindExpirationDataForTag(const UObject* objectContext, const FString& itemOrBundleId, const FString& StoreId, FDateTime& outDateTime, const FString& contextString) {
    return false;
}

bool UYShopFunctionsLibrary::FindExpirationDataForRotation(const UObject* objectContext, const FString& StoreId, FDateTime& outDateTime, const FString& contextString) {
    return false;
}

FString UYShopFunctionsLibrary::FindCachedStoreId(UObject* objectContext, const FString& rowHandleName) {
    return TEXT("");
}

EYCurrencyType UYShopFunctionsLibrary::DTCurrencyToCurrencyType(const FName& currencyRowId) {
    return EYCurrencyType::Invalid;
}

FText UYShopFunctionsLibrary::DebugConstructCurrencyText(const FString& currencyName, const int64 currencyValue, bool useBase) {
    return FText::GetEmpty();
}

FName UYShopFunctionsLibrary::CurrencyTypeToDTCurrency(const EYCurrencyType currencyType) {
    return NAME_None;
}


