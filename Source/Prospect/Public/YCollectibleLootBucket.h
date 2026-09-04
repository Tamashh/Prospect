#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YCollectibleLootBucket.generated.h"

USTRUCT(BlueprintType)
struct FYCollectibleLootBucket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_bucketRowHandle;
    
    PROSPECT_API FYCollectibleLootBucket();
};

