#pragma once
#include "CoreMinimal.h"
#include "YPlayerFinishedMatch.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerFinishedMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYPlayerFinishedMatch();
};

