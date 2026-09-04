#pragma once
#include "CoreMinimal.h"
#include "YReportEndOfMatchCheatStatisticsResponse.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYReportEndOfMatchCheatStatisticsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ErrorCode;
    
    FYReportEndOfMatchCheatStatisticsResponse();
};

