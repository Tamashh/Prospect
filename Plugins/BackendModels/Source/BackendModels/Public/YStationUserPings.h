#pragma once
#include "CoreMinimal.h"
#include "YStationUserPings.generated.h"

USTRUCT(BlueprintType)
struct FYStationUserPings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ping;
    
    BACKENDMODELS_API FYStationUserPings();
};

