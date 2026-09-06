#pragma once
#include "CoreMinimal.h"
#include "YPurchaseLoadoutPresetRequest.generated.h"

USTRUCT(BlueprintType)
struct FYPurchaseLoadoutPresetRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 loadoutpresetIndex;

    BACKENDMODELS_API FYPurchaseLoadoutPresetRequest();
};
