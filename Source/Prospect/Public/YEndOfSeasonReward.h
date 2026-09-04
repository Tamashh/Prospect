#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YEndOfSeasonReward.generated.h"

USTRUCT(BlueprintType)
struct FYEndOfSeasonReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_messageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_grants;
    
    PROSPECT_API FYEndOfSeasonReward();
};

