#pragma once
#include "CoreMinimal.h"
#include "YCheatStatisticsWrapper.generated.h"

USTRUCT(BlueprintType)
struct FYCheatStatisticsWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString cheatStatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cheatStatOccurrences;
    
    BACKENDMODELS_API FYCheatStatisticsWrapper();
};

