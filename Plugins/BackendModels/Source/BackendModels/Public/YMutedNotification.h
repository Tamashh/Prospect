#pragma once
#include "CoreMinimal.h"
#include "EYMuteReason.h"
#include "YMutedNotification.generated.h"

USTRUCT(BlueprintType)
struct FYMutedNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 durationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMuteReason Reason;
    
    BACKENDMODELS_API FYMutedNotification();
};

