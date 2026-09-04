#pragma once
#include "CoreMinimal.h"
#include "EYCurrencyType.h"
#include "EYPromotionType.h"
#include "YCurrencyItem.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "YPlayfabStoreItemEntry.h"
#include "YPlayfabStoreItemsResult.h"
#include "EYPlayFabStoreCategory.h"
#include "YCostEntryRow.h"
#include "YPurchaseFlowEvent.h"
#include "YShopFunctionsLibrary.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class PROSPECT_API UYShopFunctionsLibrary : public UObject {
    GENERATED_BODY()
public:
    UYShopFunctionsLibrary();

    UFUNCTION(BlueprintCallable)
    static bool StartPlatformOfferCheckout(UObject* objectContext, const FString& bundleRowId);
    
    UFUNCTION(BlueprintCallable)
    static bool RedeemPlayfabCoupon(UObject* objectContext, const FString& CouponCode, const FString& CatalogVersion);
    
    UFUNCTION(BlueprintCallable)
    static bool PurchasePlayfabShopItem(UObject* objectContext, const FYPlayfabStoreItemEntry& storeItem);
    
    UFUNCTION(BlueprintCallable)
    static FText PromotionTypeToText(EYPromotionType promotionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYCurrencyType PlayfabCurrencyToCurrencyType(const FString& currencyName);
    
    UFUNCTION(BlueprintCallable)
    static void OpenPlatformItemShopOverlay(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStoreItemRealMoney(const FYPlayfabStoreItemEntry& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOneTimePurchaseItemAlreadyOwned(UObject* objectContext, const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOneTimePurchaseItem(const UObject* objectContext, const FString& ItemId);
    
    UFUNCTION(BlueprintCallable)
    static float GetValRelativePosToMaxValRoundedToNextChunk(float CurrentValue, float MaxValue);
    
    UFUNCTION(BlueprintPure)
    static int64 GetRealMoneyPriceAsValue(UObject* objectContext, const FString& itemOrBundleId, const FString& contextString, bool useOverridenPrice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRealMoneyPriceAsText(UObject* objectContext, const FString& itemOrBundleId, const FString& contextString, bool useOverridenPrice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetPlayFabStoreName(const UObject* objectContext, const FString& StoreId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYPlayFabStoreCategory GetPlayFabStoreCategory(const UObject* objectContext, const FString& StoreId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetOverridenPrice(const UObject* objectContext, const FString& itemOrBundleId, const FString& currencyId, const FString& StoreId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetName(const UObject* objectContext, const FString& itemOrBundleId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UTexture2D> GetImage(const UObject* objectContext, const FString& itemOrBundleId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFormattedShopItemPrices(const FYPlayfabStoreItemEntry& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFormattedPurchaseFlowEvent(const FYPurchaseFlowEvent& purchaseFlowEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFormattedPlayfabStoreItemEntry(const FYPlayfabStoreItemEntry& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetFlavor(const UObject* objectContext, const FString& itemOrBundleId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static FYCurrencyItem GetEffectiveShopItemPrice(const FYPlayfabStoreItemEntry& Item);
    
    UFUNCTION(BlueprintCallable)
    static FYCostEntryRow GetDiscountedCostEntry(const FYCostEntryRow& currentCostEntryRow, const float relativePosToMaxValRoundedToNextChunk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDescription(const UObject* objectContext, const FString& itemOrBundleId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDefaultPrice(const UObject* objectContext, const FString& itemOrBundleId, EYCurrencyType currencyType, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindTags(const UObject* objectContext, const FString& itemOrBundleId, const FString& StoreId, TArray<FString>& outTags, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindStoreItems(const UObject* objectContext, const FString& StoreId, FYPlayfabStoreItemsResult& outStoreItems, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindStoreItem(const UObject* objectContext, const FString& itemOrBundleId, const FString& StoreId, FYPlayfabStoreItemEntry& outStoreItem, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindExpirationDataForTag(const UObject* objectContext, const FString& itemOrBundleId, const FString& StoreId, FDateTime& outDateTime, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindExpirationDataForRotation(const UObject* objectContext, const FString& StoreId, FDateTime& outDateTime, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static FString FindCachedStoreId(UObject* objectContext, const FString& rowHandleName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYCurrencyType DTCurrencyToCurrencyType(const FName& currencyRowId);
    
    UFUNCTION(BlueprintPure)
    static FText DebugConstructCurrencyText(const FString& currencyName, const int64 currencyValue, bool useBase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName CurrencyTypeToDTCurrency(const EYCurrencyType currencyType);
    
};

