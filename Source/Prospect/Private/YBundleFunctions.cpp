#include "YBundleFunctions.h"

UYBundleFunctions::UYBundleFunctions() {
}

TArray<FYBundleEntry> UYBundleFunctions::SortBundleEntriesByArchetype(const UObject* objectContext, const TArray<FYBundleEntry>& bundleEntries) {
    return TArray<FYBundleEntry>();
}

bool UYBundleFunctions::IsPlatformEntitlement(const UObject* objectContext, const FString& rowId) {
    return false;
}

bool UYBundleFunctions::IsIdABundleId(const UObject* objectContext, const FString& rowId) {
    return false;
}

bool UYBundleFunctions::FindItems(const UObject* objectContext, const FString& rowId, TArray<FYBundleEntry>& outItems, const FString& contextString) {
    return false;
}

bool UYBundleFunctions::DoesBundleContainArchetype(const UObject* objectContext, const FString& rowId, FDataTableRowHandle& archetypeRow, const FString& contextString) {
    return false;
}


