#pragma once
#include "CoreMinimal.h"
#include "YDebugGrantAllVanityItemsRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugGrantAllVanityItemsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString vanityType;
    
    BACKENDMODELS_API FYDebugGrantAllVanityItemsRequest();
};

