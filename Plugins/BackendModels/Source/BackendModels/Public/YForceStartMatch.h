#pragma once
#include "CoreMinimal.h"
#include "YForceStartMatch.generated.h"

USTRUCT(BlueprintType)
struct FYForceStartMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRanked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    BACKENDMODELS_API FYForceStartMatch();
};

