#pragma once
#include "CoreMinimal.h"
#include "YBaseAnalyticsEvent.h"
#include "YClientReconnectedEvent.generated.h"

USTRUCT(BlueprintType)
struct FYClientReconnectedEvent : public FYBaseAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString unique_disconnect_id;
    
    PROSPECT_API FYClientReconnectedEvent();
};

