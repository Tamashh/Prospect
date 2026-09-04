#pragma once
#include "CoreMinimal.h"
#include "YBaseAnalyticsEvent.h"
#include "YGenericEmptyBIEvent.generated.h"

USTRUCT(BlueprintType)
struct FYGenericEmptyBIEvent : public FYBaseAnalyticsEvent {
    GENERATED_BODY()
public:
    PROSPECT_API FYGenericEmptyBIEvent();
};

