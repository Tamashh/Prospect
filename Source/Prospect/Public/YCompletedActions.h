#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YCompletedAction.h"
#include "YCompletedActions.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYCompletedActions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCompletedAction> actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp lastDailyCapResetTimeUtc;
    
    FYCompletedActions();
};

