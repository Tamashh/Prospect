#pragma once
#include "CoreMinimal.h"
#include "YBaseAnalyticsEvent.h"
#include "YCallbackAnalyticsEvent.generated.h"

USTRUCT(BlueprintType)
struct FYCallbackAnalyticsEvent : public FYBaseAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 check;
    
    PROSPECT_API FYCallbackAnalyticsEvent();
};

