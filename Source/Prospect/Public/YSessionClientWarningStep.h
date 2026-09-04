#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YSessionClientWarningStep.generated.h"

USTRUCT(BlueprintType)
struct FYSessionClientWarningStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_notificationRow;
    
    PROSPECT_API FYSessionClientWarningStep();
};

