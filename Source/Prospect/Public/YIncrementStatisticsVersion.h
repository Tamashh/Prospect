#pragma once
#include "CoreMinimal.h"
#include "YIncrementStatisticsVersion.generated.h"

USTRUCT(BlueprintType)
struct FYIncrementStatisticsVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticName;
    
    PROSPECT_API FYIncrementStatisticsVersion();
};

