#pragma once
#include "CoreMinimal.h"
#include "YMatchmakingRegionEndpointEntry.h"
#include "YRegionEndpoints.generated.h"

USTRUCT(BlueprintType)
struct FYRegionEndpoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYMatchmakingRegionEndpointEntry> entries;
    
    BACKENDMODELS_API FYRegionEndpoints();
};

