#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYItemRarityType.h"
#include "YShopItem.generated.h"

USTRUCT(BlueprintType)
struct FYShopItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_blueprintHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemRarityType m_itemRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_shopItemBelongsTo;
    
    PROSPECT_API FYShopItem();
};

