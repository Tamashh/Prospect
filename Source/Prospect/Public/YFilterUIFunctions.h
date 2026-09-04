#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YFilterCategoriesDataEntry.h"
#include "YFilterItemEntry.h"
#include "YFilterRuntimeSettings.h"
#include "YVanityItemData.h"
#include "YFilterUIFunctions.generated.h"

UCLASS(Blueprintable)
class UYFilterUIFunctions : public UObject {
    GENERATED_BODY()
public:
    UYFilterUIFunctions();

    UFUNCTION(BlueprintCallable)
    static bool UpdateFilterVanityItemsEntries(UObject* objCtx, const TArray<FYVanityItemData>& vanityItems, const FYFilterRuntimeSettings& Settings, TArray<FYFilterItemEntry>& outItemEntries);
    
    UFUNCTION(BlueprintCallable)
    static bool FindRelevantDataTableRowFromFilterRuntimeData(UObject* objCtx, const FYFilterCategoriesDataEntry& categoriesEntry, const FYFilterRuntimeSettings& Settings, TArray<FYFilterItemEntry>& outItemEntries);
    
    UFUNCTION(BlueprintCallable)
    static bool FindRelevantDataTableRowFromFilter(UObject* objCtx, const FYFilterCategoriesDataEntry& categoriesEntry, TArray<FYFilterItemEntry>& outItemData);
    
};

