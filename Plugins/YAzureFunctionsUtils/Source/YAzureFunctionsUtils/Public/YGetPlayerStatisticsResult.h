#pragma once
#include "CoreMinimal.h"
#include "YPlayfabPlayerStatistic.h"
#include "YGetPlayerStatisticsResult.generated.h"

USTRUCT(BlueprintType)
struct FYGetPlayerStatisticsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayfabPlayerStatistic> Statistics;
    
    YAZUREFUNCTIONSUTILS_API FYGetPlayerStatisticsResult();
};

