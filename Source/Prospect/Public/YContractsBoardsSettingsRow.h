#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YContractsBoardsSettingsRow.generated.h"

USTRUCT(BlueprintType)
struct FYContractsBoardsSettingsRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_refreshTimeInHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxNumOfActiveContracts;
    
    PROSPECT_API FYContractsBoardsSettingsRow();
};

