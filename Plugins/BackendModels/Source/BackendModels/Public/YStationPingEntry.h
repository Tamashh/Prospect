#pragma once
#include "CoreMinimal.h"
#include "YStationPingEntry.generated.h"

USTRUCT(BlueprintType)
struct FYStationPingEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString endpoint;
    
    BACKENDMODELS_API FYStationPingEntry();
};

