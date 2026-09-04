#pragma once
#include "CoreMinimal.h"
#include "YDebugGiveRerollTokensResponse.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYDebugGiveRerollTokensResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 playerNumOfRerollTokens;
    
    FYDebugGiveRerollTokensResponse();
};

