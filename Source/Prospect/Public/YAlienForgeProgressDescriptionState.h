#pragma once
#include "CoreMinimal.h"
#include "EYItemRarityType.h"
#include "YInventoryItem.h"
#include "YAlienForgeProgressDescriptionState.generated.h"

USTRUCT(BlueprintType)
struct FYAlienForgeProgressDescriptionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_itemsToForge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_surplusItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_consumedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemRarityType m_possibleRarityForLotteryTicketOrBaseItem;
    
    PROSPECT_API FYAlienForgeProgressDescriptionState();
};

