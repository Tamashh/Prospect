#pragma once
#include "CoreMinimal.h"
#include "YCurrentQueueInfo.generated.h"

USTRUCT(BlueprintType)
struct FYCurrentQueueInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 roomSize;
    
    BACKENDMODELS_API FYCurrentQueueInfo();
};

