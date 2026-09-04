#pragma once
#include "CoreMinimal.h"
#include "MatchStatsMapWrapper.generated.h"

USTRUCT(BlueprintType)
struct FMatchStatsMapWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> MatchStatsMap;
    
    PROSPECT_API FMatchStatsMapWrapper();
};

