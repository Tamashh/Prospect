#pragma once
#include "CoreMinimal.h"
#include "YGameInfo.h"
#include "YRequestServerMapResult.generated.h"

USTRUCT(BlueprintType)
struct FYRequestServerMapResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGameInfo GameInfo;
    
    BACKENDMODELS_API FYRequestServerMapResult();
};

