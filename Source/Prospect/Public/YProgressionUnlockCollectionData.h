#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YProgressionUnlockData.h"
#include "YProgressionUnlockCollectionData.generated.h"

USTRUCT(BlueprintType)
struct FYProgressionUnlockCollectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldBeDisplayedAsEndOfChainReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYProgressionUnlockData> m_factionUnlockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_contractLockPurchase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_contractLockCrafting;
    
    PROSPECT_API FYProgressionUnlockCollectionData();
};

