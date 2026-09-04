#pragma once
#include "CoreMinimal.h"
#include "YBaseAnalyticsEvent.h"
#include "YBIHook_MinimapOpen.generated.h"

USTRUCT(BlueprintType)
struct FYBIHook_MinimapOpen : public FYBaseAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 time_since_user_joined;
    
    PROSPECT_API FYBIHook_MinimapOpen();
};

