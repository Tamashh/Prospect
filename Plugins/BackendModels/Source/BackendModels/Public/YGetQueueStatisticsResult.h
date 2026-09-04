#pragma once
#include "CoreMinimal.h"
#include "YGetQueueStatisticsResult.generated.h"

USTRUCT(BlueprintType)
struct FYGetQueueStatisticsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_usersSearching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_averageSearchTime;
    
    BACKENDMODELS_API FYGetQueueStatisticsResult();
};

