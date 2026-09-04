#pragma once
#include "CoreMinimal.h"
#include "YBaseAnalyticsEvent.h"
#include "YPlayerStatsAnalyticsEvent.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerStatsAnalyticsEvent : public FYBaseAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString stats;
    
    PROSPECT_API FYPlayerStatsAnalyticsEvent();
};

