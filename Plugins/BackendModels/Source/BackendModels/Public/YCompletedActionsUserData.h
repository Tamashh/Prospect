#pragma once
#include "CoreMinimal.h"
#include "YCompletedActionUserData.h"
#include "YTimestamp.h"
#include "YCompletedActionsUserData.generated.h"

USTRUCT(BlueprintType)
struct FYCompletedActionsUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FYCompletedActionUserData> actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp lastDailyCapResetTimeUtc;
    
    BACKENDMODELS_API FYCompletedActionsUserData();
};

