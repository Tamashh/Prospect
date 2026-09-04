#pragma once
#include "CoreMinimal.h"
#include "YRequestLeaveStationInfo.generated.h"

USTRUCT(BlueprintType)
struct FYRequestLeaveStationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isMatch;
    
    BACKENDMODELS_API FYRequestLeaveStationInfo();
};

