#pragma once
#include "CoreMinimal.h"
#include "EYGenericClaimableOrigin.h"
#include "YGenericClaimableResource.h"
#include "YGenericClaimableData.generated.h"

USTRUCT(BlueprintType)
struct FYGenericClaimableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGenericClaimableOrigin Origin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYGenericClaimableResource> Data;

    BACKENDMODELS_API FYGenericClaimableData();
};
