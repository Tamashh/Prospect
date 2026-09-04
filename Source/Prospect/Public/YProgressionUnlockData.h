#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYItemRarityType.h"
#include "YProgressionUnlockData.generated.h"

USTRUCT(BlueprintType)
struct FYProgressionUnlockData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemRarityType m_rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_level;
    
    PROSPECT_API FYProgressionUnlockData();
};

