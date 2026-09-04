#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YBundleEntry.h"
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
    static bool FindItems(const UObject* objectContext, const FString& rowId, TArray<FYBundleEntry>& outItems, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesBundleContainArchetype(const UObject* objectContext, const FString& rowId, FDataTableRowHandle& archetypeRow, const FString& contextString);
    
};

