#pragma once
#include "CoreMinimal.h"
#include "YSeasonalPlayerStatistic.generated.h"

USTRUCT(BlueprintType)
struct FYSeasonalPlayerStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> stats;
    
    YAZUREFUNCTIONSUTILS_API FYSeasonalPlayerStatistic();
};

