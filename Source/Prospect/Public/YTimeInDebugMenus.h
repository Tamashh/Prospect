#pragma once
#include "CoreMinimal.h"
#include "YBaseAnalyticsEvent.h"
#include "YTimeInDebugMenus.generated.h"

USTRUCT(BlueprintType)
struct FYTimeInDebugMenus : public FYBaseAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    PROSPECT_API FYTimeInDebugMenus();
};

