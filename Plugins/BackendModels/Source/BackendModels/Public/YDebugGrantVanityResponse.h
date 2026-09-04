#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YDebugGrantVanityResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDebugGrantVanityResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> updatedVanityItems;
    
    BACKENDMODELS_API FYDebugGrantVanityResponse();
};

