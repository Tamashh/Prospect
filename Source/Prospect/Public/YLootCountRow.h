#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YLootCountData.h"
#include "YLootCountRow.generated.h"

USTRUCT(BlueprintType)
struct FYLootCountRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLootCountData> m_lootRolls;
    
    PROSPECT_API FYLootCountRow();
};

