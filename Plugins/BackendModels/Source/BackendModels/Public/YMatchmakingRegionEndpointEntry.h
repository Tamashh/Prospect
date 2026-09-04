#pragma once
#include "CoreMinimal.h"
#include "YMatchmakingRegionEndpointEntry.generated.h"

USTRUCT(BlueprintType)
struct FYMatchmakingRegionEndpointEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString endpoint;
    
    BACKENDMODELS_API FYMatchmakingRegionEndpointEntry();
};

