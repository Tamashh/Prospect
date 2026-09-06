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

bool UYBundleFunctions::FindPlatformStoresData(const UObject* objectContext, const FString& rowId, TArray<FYPlatformStoreEntry>& outPlatformStoresData, const FString& contextString) {
    return false;
}

bool UYBundleFunctions::FindItems(const UObject* objectContext, const FString& rowId, TArray<FYBundleEntry>& outItems, const FString& contextString, const bool addPreviewItems) {
    return false;
}

bool UYBundleFunctions::FindItemMeshVisualizationOverride(const UObject* objectContext, const FString& rowId, FYItemMeshVisualizationOverride& outData, const FString& contextString) {
    return false;
}

bool UYBundleFunctions::FindCurrentPlatformStoreData(const UObject* objectContext, const FString& rowId, FYPlatformStoreEntry& outPlatformStoreData, const FString& contextString) {
    return false;
}

bool UYBundleFunctions::DoesBundleContainArchetype(const UObject* objectContext, const FString& rowId, FDataTableRowHandle& archetypeRow, const FString& contextString) {
    return false;
}

bool UYBundleFunctions::CreateBundleRowHandle(const UObject* objectContext, const FString& rowId, FDataTableRowHandle& outRowHandle) {
    return false;
}


