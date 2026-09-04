#pragma once
#include "CoreMinimal.h"
#include "EYSocialRequestResult.h"
#include "YExecuteSocialPresenceStateResult.generated.h"

USTRUCT(BlueprintType)
struct FYExecuteSocialPresenceStateResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSocialRequestResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYExecuteSocialPresenceStateResult();
};

