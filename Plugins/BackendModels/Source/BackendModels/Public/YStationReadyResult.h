#pragma once
#include "CoreMinimal.h"
#include "YStationReadyResult.generated.h"

USTRUCT(BlueprintType)
struct FYStationReadyResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString serverAddress;
    
    BACKENDMODELS_API FYStationReadyResult();
};

