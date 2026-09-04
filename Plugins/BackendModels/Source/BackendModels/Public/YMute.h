#pragma once
#include "CoreMinimal.h"
#include "EYMuteReason.h"
#include "YMute.generated.h"

USTRUCT(BlueprintType)
struct FYMute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 durationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMuteReason Reason;
    
    BACKENDMODELS_API FYMute();
};

