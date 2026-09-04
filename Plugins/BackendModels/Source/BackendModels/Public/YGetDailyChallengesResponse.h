#pragma once
#include "CoreMinimal.h"
#include "YQuestState.h"
#include "YGetDailyChallengesResponse.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetDailyChallengesResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYQuestState> quests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 playerNumOfRerollTokens;
    
    FYGetDailyChallengesResponse();
};

