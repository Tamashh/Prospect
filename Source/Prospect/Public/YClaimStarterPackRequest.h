#pragma once
#include "CoreMinimal.h"
#include "YClaimStarterPackRequest.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYClaimStarterPackRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString bundleId;
    
    FYClaimStarterPackRequest();
};

