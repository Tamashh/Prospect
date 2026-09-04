#pragma once
#include "CoreMinimal.h"
#include "YBaseAnalyticsEvent.h"
#include "YPlayerQuartersLevelUpBI.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerQuartersLevelUpBI : public FYBaseAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 quarters_level;
    
    PROSPECT_API FYPlayerQuartersLevelUpBI();
};

