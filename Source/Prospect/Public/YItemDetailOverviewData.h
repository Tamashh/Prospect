#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYItemRarityType.h"
#include "YItemDetailOverviewData.generated.h"

USTRUCT(BlueprintType)
struct FYItemDetailOverviewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isItemBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_itemRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemRarityType m_itemRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_shopItemBelongsTo;
    
    PROSPECT_API FYItemDetailOverviewData();
};

