#pragma once
#include "CoreMinimal.h"
#include "YStationServerPlayerLeft.generated.h"

USTRUCT(BlueprintType)
struct FYStationServerPlayerLeft {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYStationServerPlayerLeft();
};

