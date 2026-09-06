#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YBundleEntry.h"
#include "YItemMeshVisualizationOverride.h"
#include "YPlatformStoreEntry.h"
#include "YBundleFunctions.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYBundleFunctions : public UObject {
    GENERATED_BODY()
public:
    UYBundleFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FYBundleEntry> SortBundleEntriesByArchetype(const UObject* objectContext, const TArray<FYBundleEntry>& bundleEntries);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlatformEntitlement(const UObject* objectContext, const FString& rowId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsIdABundleId(const UObject* objectContext, const FString& rowId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindPlatformStoresData(const UObject* objectContext, const FString& rowId, TArray<FYPlatformStoreEntry>& outPlatformStoresData, const FString& contextString);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindItems(const UObject* objectContext, const FString& rowId, TArray<FYBundleEntry>& outItems, const FString& contextString, const bool addPreviewItems);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindItemMeshVisualizationOverride(const UObject* objectContext, const FString& rowId, FYItemMeshVisualizationOverride& outData, const FString& contextString);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindCurrentPlatformStoreData(const UObject* objectContext, const FString& rowId, FYPlatformStoreEntry& outPlatformStoreData, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesBundleContainArchetype(const UObject* objectContext, const FString& rowId, FDataTableRowHandle& archetypeRow, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CreateBundleRowHandle(const UObject* objectContext, const FString& rowId, FDataTableRowHandle& outRowHandle);

};

