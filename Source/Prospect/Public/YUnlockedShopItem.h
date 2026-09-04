#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYItemRarityType.h"
#include "YUnlockedShopItem.generated.h"

USTRUCT(BlueprintType)
struct FYUnlockedShopItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_blueprintHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemRarityType m_itemRarity;
    
    PROSPECT_API FYUnlockedShopItem();
};

