#pragma once
#include "CoreMinimal.h"
#include "EYSocialRequestResult.h"
#include "YDebugAddRandomFriendsResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugAddRandomFriendsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSocialRequestResult Result;
    
    BACKENDMODELS_API FYDebugAddRandomFriendsResult();
};

