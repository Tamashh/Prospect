#pragma once
#include "CoreMinimal.h"
#include "YDebugRequestShardStationChange.generated.h"

USTRUCT(BlueprintType)
struct FYDebugRequestShardStationChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 shardIndex;
    
    BACKENDMODELS_API FYDebugRequestShardStationChange();
};

