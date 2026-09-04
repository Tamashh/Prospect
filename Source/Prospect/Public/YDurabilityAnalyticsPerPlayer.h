#pragma once
#include "CoreMinimal.h"
#include "YDurabilityAnalyticsEvent.h"
#include "YDurabilityAnalyticsPerPlayer.generated.h"

USTRUCT(BlueprintType)
struct FYDurabilityAnalyticsPerPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FYDurabilityAnalyticsEvent> m_itemAnalytics;
    
    PROSPECT_API FYDurabilityAnalyticsPerPlayer();
};

