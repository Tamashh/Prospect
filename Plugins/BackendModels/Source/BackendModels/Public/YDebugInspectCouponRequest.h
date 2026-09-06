#pragma once
#include "CoreMinimal.h"
#include "YDebugInspectCouponRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYDebugInspectCouponRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CouponCode;

    FYDebugInspectCouponRequest();
};
