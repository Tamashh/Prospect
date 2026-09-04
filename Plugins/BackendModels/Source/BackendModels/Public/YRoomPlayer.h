#pragma once
#include "CoreMinimal.h"
#include "YRoomPlayer.generated.h"

USTRUCT(BlueprintType)
struct FYRoomPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    BACKENDMODELS_API FYRoomPlayer();
};

