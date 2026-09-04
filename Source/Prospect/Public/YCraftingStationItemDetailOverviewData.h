#pragma once
#include "CoreMinimal.h"
#include "EYItemRarityType.h"
#include "YCraftingStationItemDetailOverviewData.generated.h"

USTRUCT(BlueprintType)
struct FYCraftingStationItemDetailOverviewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemRarityType m_itemRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_bpName;
    
    PROSPECT_API FYCraftingStationItemDetailOverviewData();
};

