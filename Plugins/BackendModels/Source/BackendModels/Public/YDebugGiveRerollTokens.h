#pragma once
#include "CoreMinimal.h"
#include "YDebugGiveRerollTokens.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYDebugGiveRerollTokens {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numOfTokensToGiveToThePlayer;
    
    FYDebugGiveRerollTokens();
};

