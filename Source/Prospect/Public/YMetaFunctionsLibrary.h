#pragma once
#include "CoreMinimal.h"
#include "EYCurrencyType.h"
#include "YCurrencyItem.h"
#include "YUserCurrenciesItems.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YMetaFunctionsLibrary.generated.h"

class UYGameInventoryManager;
class UYGrantsManager;

UCLASS(Blueprintable)
class PROSPECT_API UYMetaFunctionsLibrary : public UObject {
    GENERATED_BODY()
public:
    UYMetaFunctionsLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVanityRowHandle(const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserAbleToGainedCurrencyOfType(UObject* objectContext, const FString& callerContext, const FString& UserId, EYCurrencyType currencyType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLocalUserAbleToGainCurrencyOfType(UObject* objectContext, const FString& callerContext, EYCurrencyType currencyType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurrencyRowHandle(const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindUserCurrencyTypeAmount(UObject* objectContext, const FString& callerContext, const FString& UserId, EYCurrencyType Type);
    
    UFUNCTION(BlueprintCallable)
    static bool FindUserCurrencyItemFromType(UObject* objectContext, const FString& callerContext, const FString& UserId, EYCurrencyType Type, FYCurrencyItem& OutItem);
    
    UFUNCTION(BlueprintCallable)
    static bool FindUserCurrencies(UObject* objCtx, const FString& callerContext, const FString& UserId, FYUserCurrenciesItems& outCurrencies);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindLocalUserCurrencyAmountType(UObject* objectContext, const FString& callerContext, EYCurrencyType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FindLocalUserCurrencyAmountName(UObject* objectContext, const FString& callerContext, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindLocalUserCurrencyAmountByName(UObject* objectContext, const FString& callerContext, const FString& currencyName);
    
    UFUNCTION(BlueprintCallable)
    static bool FindLocalUserCurrencies(UObject* objectContext, const FString& callerContext, FYUserCurrenciesItems& outCurrencies);
    
    UFUNCTION(BlueprintCallable)
    static UYGrantsManager* FindGrantsManager(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static UYGameInventoryManager* FindGameInventoryManager(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindCurrencyMaximumAmount(UObject* objectContext, EYCurrencyType currencyType);
    
    UFUNCTION(BlueprintCallable)
    static bool FindCurrencyItemFromArray(UObject* objectContext, const FString& callerContext, const TArray<FYCurrencyItem>& currencyItems, EYCurrencyType Type, FYCurrencyItem& OutItem);
    
};

