#pragma once
#include "CoreMinimal.h"
#include "YDebugGrantVanityRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugGrantVanityRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString vanityId;
    
    BACKENDMODELS_API FYDebugGrantVanityRequest();
};

