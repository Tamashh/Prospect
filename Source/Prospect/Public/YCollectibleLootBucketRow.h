#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDataTableRowBase.h"
#include "YCollectibleLootBucketRow.generated.h"

USTRUCT(BlueprintType)
struct FYCollectibleLootBucketRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_bucketItems;
    
    PROSPECT_API FYCollectibleLootBucketRow();
};

