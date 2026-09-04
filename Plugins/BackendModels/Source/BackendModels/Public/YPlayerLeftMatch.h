#pragma once
#include "CoreMinimal.h"
#include "YPlayerLeftMatch.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerLeftMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYPlayerLeftMatch();
};

