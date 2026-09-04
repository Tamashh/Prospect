#include "YGrantFunctionsLibrary.h"

UYGrantFunctionsLibrary::UYGrantFunctionsLibrary() {
}

bool UYGrantFunctionsLibrary::HasClaimedGrant(UObject* objectContext, const FString& grantId, const FString& contextString, bool checkOnlyClaimedState) {
    return false;
}

bool UYGrantFunctionsLibrary::HasCachedGrant(UObject* objectContext, const FString& grantId, const FString& contextString) {
    return false;
}

bool UYGrantFunctionsLibrary::HasArchetypeItem(UObject* objectContext, const FString& grantRowId, FDataTableRowHandle& outArchetypeItemRowHandle, const FString& contextStr) {
    return false;
}

void UYGrantFunctionsLibrary::FindGrantRows(const UObject* objectContext, const TArray<FString>& grantRowIds, TArray<FYGrantRow>& outGrantRows, const FString& contextString) {
}

bool UYGrantFunctionsLibrary::FindGrantRow(const UObject* objectContext, const FString& grantRowId, FYGrantRow& outGrantRow, const FString& contextString) {
    return false;
}


