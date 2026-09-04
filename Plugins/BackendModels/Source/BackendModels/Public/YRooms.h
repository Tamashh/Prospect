#pragma once
#include "CoreMinimal.h"
#include "YRoomInfo.h"
#include "YRooms.generated.h"

USTRUCT(BlueprintType)
struct FYRooms {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRoomInfo> waitingRooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRoomInfo> playingRooms;
    
    BACKENDMODELS_API FYRooms();
};

