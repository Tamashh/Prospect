#pragma once
#include "CoreMinimal.h"
#include "YGetRoomInfo.generated.h"

USTRUCT(BlueprintType)
struct FYGetRoomInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString roomId;
    
    BACKENDMODELS_API FYGetRoomInfo();
};

