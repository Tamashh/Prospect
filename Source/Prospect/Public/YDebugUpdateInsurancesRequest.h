#pragma once
#include "CoreMinimal.h"
#include "YPurchaseInsuranceRequest.h"
#include "YDebugUpdateInsurancesRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugUpdateInsurancesRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPurchaseInsuranceRequest Data;
    
    PROSPECT_API FYDebugUpdateInsurancesRequest();
};

