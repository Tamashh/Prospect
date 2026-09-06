#pragma once
#include "CoreMinimal.h"
#include "YGenericClaimableResource.generated.h"

USTRUCT(BlueprintType)
struct FYGenericClaimableResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString resourceId;

    BACKENDMODELS_API FYGenericClaimableResource();
};
