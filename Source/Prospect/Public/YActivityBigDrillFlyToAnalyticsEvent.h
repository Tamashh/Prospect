#pragma once
#include "CoreMinimal.h"
#include "YBaseActivityStats.h"
#include "YActivityBigDrillFlyToAnalyticsEvent.generated.h"

USTRUCT(BlueprintType)
struct FYActivityBigDrillFlyToAnalyticsEvent : public FYBaseActivityStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 target_position_x;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 target_position_y;
    
    PROSPECT_API FYActivityBigDrillFlyToAnalyticsEvent();
};

