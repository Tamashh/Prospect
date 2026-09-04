#pragma once
#include "CoreMinimal.h"
#include "YStationServerReady.generated.h"

USTRUCT(BlueprintType)
struct FYStationServerReady {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString serverAddress;
    
    BACKENDMODELS_API FYStationServerReady();
};

