#pragma once
#include "CoreMinimal.h"
#include "YCosmosDBCouponItem.h"
#include "YDebugInspectCouponResult.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYDebugInspectCouponResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCosmosDBCouponItem coupon;

    FYDebugInspectCouponResult();
};
