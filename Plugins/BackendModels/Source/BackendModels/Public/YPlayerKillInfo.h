#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YPlayerKillInfo.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerKillInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString victimId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp killTime;
    
    BACKENDMODELS_API FYPlayerKillInfo();
};

