#pragma once
#include "CoreMinimal.h"
#include "YItemRecipe.h"
#include "YLevelItemEntry.generated.h"

USTRUCT(BlueprintType)
struct FYLevelItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_modSlotsUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYItemRecipe m_recipeToUpgradeItemToThisRarity;
    
    PROSPECT_API FYLevelItemEntry();
};

