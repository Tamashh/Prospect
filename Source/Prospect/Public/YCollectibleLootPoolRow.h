#pragma once
#include "CoreMinimal.h"
#include "YCollectibleLootBucket.h"
#include "YDataTableRowBase.h"
#include "YCollectibleLootPoolRow.generated.h"

USTRUCT(BlueprintType)
struct FYCollectibleLootPoolRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCollectibleLootBucket> m_lootBuckets;
    
    PROSPECT_API FYCollectibleLootPoolRow();
};

