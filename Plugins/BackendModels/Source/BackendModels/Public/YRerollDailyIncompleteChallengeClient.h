#pragma once
#include "CoreMinimal.h"
#include "YRerollDailyIncompleteChallengeClient.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYRerollDailyIncompleteChallengeClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString challengeName;
    
    FYRerollDailyIncompleteChallengeClient();
};

