#pragma once
#include "CoreMinimal.h"
#include "YRoomPlayer.h"
#include "YSingleModeInfo.generated.h"

USTRUCT(BlueprintType)
struct FYSingleModeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRoomPlayer> users;
    
    BACKENDMODELS_API FYSingleModeInfo();
};

