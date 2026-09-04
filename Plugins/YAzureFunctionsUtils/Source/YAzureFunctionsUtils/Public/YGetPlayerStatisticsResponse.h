#pragma once
#include "CoreMinimal.h"
#include "YGetPlayerStatisticsResult.h"
#include "YGetPlayerStatisticsResponse.generated.h"

USTRUCT(BlueprintType)
struct FYGetPlayerStatisticsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYGetPlayerStatisticsResult> playerStatistics;
    
    YAZUREFUNCTIONSUTILS_API FYGetPlayerStatisticsResponse();
};

