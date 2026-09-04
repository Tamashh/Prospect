#pragma once
#include "CoreMinimal.h"
#include "YKilledAIAnalyticsEvent.h"
#include "YKilledAIAnalyticsEvents.generated.h"

USTRUCT(BlueprintType)
struct FYKilledAIAnalyticsEvents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FYKilledAIAnalyticsEvent> m_killedAIAnalyticsEventsByName;
    
    PROSPECT_API FYKilledAIAnalyticsEvents();
};

