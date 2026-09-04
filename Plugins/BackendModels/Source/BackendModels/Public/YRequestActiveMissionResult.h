#pragma once
#include "CoreMinimal.h"
#include "YRequestActiveMissionResult.generated.h"

USTRUCT(BlueprintType)
struct FYRequestActiveMissionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString currentMissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress;
    
    BACKENDMODELS_API FYRequestActiveMissionResult();
};

