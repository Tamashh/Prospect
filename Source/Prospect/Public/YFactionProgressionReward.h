#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YFactionProgressionReward.generated.h"

USTRUCT(BlueprintType)
struct FYFactionProgressionReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_currencyTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amount;
    
    PROSPECT_API FYFactionProgressionReward();
};

