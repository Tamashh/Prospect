#include "YMetaFunctionsLibrary.h"

UYMetaFunctionsLibrary::UYMetaFunctionsLibrary() {
}

bool UYMetaFunctionsLibrary::IsVanityRowHandle(const FDataTableRowHandle& rowHandle) {
    return false;
}

bool UYMetaFunctionsLibrary::IsUserAbleToGainedCurrencyOfType(UObject* objectContext, const FString& callerContext, const FString& UserId, EYCurrencyType currencyType) {
    return false;
}

bool UYMetaFunctionsLibrary::IsLocalUserAbleToGainCurrencyOfType(UObject* objectContext, const FString& callerContext, EYCurrencyType currencyType) {
    return false;
}

bool UYMetaFunctionsLibrary::IsCurrencyRowHandle(const FDataTableRowHandle& rowHandle) {
    return false;
}

int32 UYMetaFunctionsLibrary::FindUserCurrencyTypeAmount(UObject* objectContext, const FString& callerContext, const FString& UserId, EYCurrencyType Type) {
    return 0;
}

bool UYMetaFunctionsLibrary::FindUserCurrencyItemFromType(UObject* objectContext, const FString& callerContext, const FString& UserId, EYCurrencyType Type, FYCurrencyItem& OutItem) {
    return false;
}

bool UYMetaFunctionsLibrary::FindUserCurrencies(UObject* objCtx, const FString& callerContext, const FString& UserId, FYUserCurrenciesItems& outCurrencies) {
    return false;
}

int32 UYMetaFunctionsLibrary::FindLocalUserCurrencyAmountType(UObject* objectContext, const FString& callerContext, EYCurrencyType Type) {
    return 0;
}

int32 UYMetaFunctionsLibrary::FindLocalUserCurrencyAmountName(UObject* objectContext, const FString& callerContext, const FString& Name) {
    return 0;
}

int32 UYMetaFunctionsLibrary::FindLocalUserCurrencyAmountByName(UObject* objectContext, const FString& callerContext, const FString& currencyName) {
    return 0;
}

bool UYMetaFunctionsLibrary::FindLocalUserCurrencies(UObject* objectContext, const FString& callerContext, FYUserCurrenciesItems& outCurrencies) {
    return false;
}

UYGrantsManager* UYMetaFunctionsLibrary::FindGrantsManager(UObject* objectContext) {
    return NULL;
}

UYGameInventoryManager* UYMetaFunctionsLibrary::FindGameInventoryManager(UObject* objectContext) {
    return NULL;
}

int32 UYMetaFunctionsLibrary::FindCurrencyMaximumAmount(UObject* objectContext, EYCurrencyType currencyType) {
    return 0;
}

bool UYMetaFunctionsLibrary::FindCurrencyItemFromArray(UObject* objectContext, const FString& callerContext, const TArray<FYCurrencyItem>& currencyItems, EYCurrencyType Type, FYCurrencyItem& OutItem) {
    return false;
}


