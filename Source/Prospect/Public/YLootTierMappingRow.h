#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYLootTier.h"
#include "YDataTableRowBase.h"
#include "YLootTierMappingRow.generated.h"

USTRUCT(BlueprintType)
struct FYLootTierMappingRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYLootTier, FDataTableRowHandle> m_rarityLoot;
    
    PROSPECT_API FYLootTierMappingRow();
};

