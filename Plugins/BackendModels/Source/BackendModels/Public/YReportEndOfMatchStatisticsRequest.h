#pragma once
#include "CoreMinimal.h"
#include "EYMatchOutcome.h"
#include "YGameServerRequest.h"
#include "YReportEndOfMatchStatisticsRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYReportEndOfMatchStatisticsRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMatchOutcome Outcome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 killsPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 killsCreatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 damagePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 damageCreatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 matchDurationMinutes;
    
    FYReportEndOfMatchStatisticsRequest();
};

