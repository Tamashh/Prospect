#pragma once
#include "CoreMinimal.h"
#include "YPlayerActionHistoryData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerActionHistoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> m_timeSameActionTowardsUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_currentTimeMuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amountOfTimesMuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_currentlyMuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastTimeTracked;
    
    PROSPECT_API FYPlayerActionHistoryData();
};

