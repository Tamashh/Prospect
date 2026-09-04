#pragma once
#include "CoreMinimal.h"
#include "YRequestFortunaPassSkipToLevelRequest.generated.h"

USTRUCT(BlueprintType)
struct FYRequestFortunaPassSkipToLevelRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    BACKENDMODELS_API FYRequestFortunaPassSkipToLevelRequest();
};

