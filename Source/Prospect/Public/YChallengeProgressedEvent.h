#pragma once
#include "CoreMinimal.h"
#include "YBaseAnalyticsEvent.h"
#include "YChallengeProgressedEvent.generated.h"

USTRUCT(BlueprintType)
struct FYChallengeProgressedEvent : public FYBaseAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName quest_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 quest_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max_progress;
    
    PROSPECT_API FYChallengeProgressedEvent();
};

