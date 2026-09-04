#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YCompletedAction.h"
#include "YSeasonProgressionCompletedActions.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYSeasonProgressionCompletedActions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCompletedAction> actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp lastDailyCapResetTimeUtc;
    
    FYSeasonProgressionCompletedActions();
};

