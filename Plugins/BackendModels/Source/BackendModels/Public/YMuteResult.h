#pragma once
#include "CoreMinimal.h"
#include "EYMuteResult.h"
#include "YMuteResult.generated.h"

USTRUCT(BlueprintType)
struct FYMuteResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMuteResult Result;
    
    BACKENDMODELS_API FYMuteResult();
};

