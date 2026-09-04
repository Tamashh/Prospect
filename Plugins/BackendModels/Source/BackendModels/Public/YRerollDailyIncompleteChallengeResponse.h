#pragma once
#include "CoreMinimal.h"
#include "YQuestState.h"
#include "YRerollDailyIncompleteChallengeResponse.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYRerollDailyIncompleteChallengeResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool rerollWasSuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYQuestState removedChallengeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYQuestState newChallengeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 playerNumOfRerollTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FYRerollDailyIncompleteChallengeResponse();
};

