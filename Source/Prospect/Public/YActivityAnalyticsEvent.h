#pragma once
#include "CoreMinimal.h"
#include "EYActivityType.h"
#include "YBaseActivityStats.h"
#include "YActivityAnalyticsEvent.generated.h"

USTRUCT(BlueprintType)
struct FYActivityAnalyticsEvent : public FYBaseActivityStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYActivityType Activity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString activitySubType;
    
    PROSPECT_API FYActivityAnalyticsEvent();
};

