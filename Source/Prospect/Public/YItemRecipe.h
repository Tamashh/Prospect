#pragma once
#include "CoreMinimal.h"
#include "YCostEntryRow.h"
#include "YItemRecipe.generated.h"

USTRUCT(BlueprintType)
struct FYItemRecipe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCostEntryRow> m_itemRecipeIngredients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_upgradeTimeMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_upgradeTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCostEntryRow m_skipCraftingMaxCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCostEntryRow m_skipOptionalCraftingMaxCost;
    
    PROSPECT_API FYItemRecipe();
};

