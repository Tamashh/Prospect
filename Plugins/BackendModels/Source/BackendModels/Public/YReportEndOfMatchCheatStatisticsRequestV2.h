#pragma once
#include "CoreMinimal.h"
#include "YCheatStatisticsWrapper.h"
#include "YGameServerRequest.h"
#include "YReportEndOfMatchCheatStatisticsRequestV2.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYReportEndOfMatchCheatStatisticsRequestV2 : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool autoBanned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCheatStatisticsWrapper> cheatStats;
    
    FYReportEndOfMatchCheatStatisticsRequestV2();
};

