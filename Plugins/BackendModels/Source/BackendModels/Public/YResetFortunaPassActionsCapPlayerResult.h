#pragma once
#include "CoreMinimal.h"
#include "YResetFortunaPassActionsCapPlayerResult.generated.h"

USTRUCT(BlueprintType)
struct FYResetFortunaPassActionsCapPlayerResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    BACKENDMODELS_API FYResetFortunaPassActionsCapPlayerResult();
};

