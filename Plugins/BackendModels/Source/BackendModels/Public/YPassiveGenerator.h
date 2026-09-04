#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YPassiveGenerator.generated.h"

USTRUCT(BlueprintType)
struct FYPassiveGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString generatorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp lastClaimTime;
    
    BACKENDMODELS_API FYPassiveGenerator();
};

