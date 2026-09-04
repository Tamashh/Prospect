#pragma once
#include "CoreMinimal.h"
#include "YResetSessionsAndCreateNewRequestResult.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYResetSessionsAndCreateNewRequestResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    FYResetSessionsAndCreateNewRequestResult();
};

