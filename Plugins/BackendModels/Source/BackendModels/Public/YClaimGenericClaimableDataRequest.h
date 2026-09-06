#pragma once
#include "CoreMinimal.h"
#include "EYGenericClaimableOrigin.h"
#include "YClaimGenericClaimableDataRequest.generated.h"

USTRUCT(BlueprintType)
struct FYClaimGenericClaimableDataRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGenericClaimableOrigin Origin;

    BACKENDMODELS_API FYClaimGenericClaimableDataRequest();
};
