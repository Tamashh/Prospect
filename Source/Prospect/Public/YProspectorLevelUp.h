#pragma once
#include "CoreMinimal.h"
#include "YBaseAnalyticsEvent.h"
#include "YProspectorLevelUp.generated.h"

USTRUCT(BlueprintType)
struct FYProspectorLevelUp : public FYBaseAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 prospector_level;
    
    PROSPECT_API FYProspectorLevelUp();
};

