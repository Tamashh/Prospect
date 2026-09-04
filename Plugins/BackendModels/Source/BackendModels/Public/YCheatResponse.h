#pragma once
#include "CoreMinimal.h"
#include "EYCheatResult.h"
#include "YCheatResponse.generated.h"

USTRUCT(BlueprintType)
struct FYCheatResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCheatResult Status;
    
    BACKENDMODELS_API FYCheatResponse();
};

