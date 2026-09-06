#pragma once
#include "CoreMinimal.h"
#include "EYClaimCouponCodeStatus.h"
#include "YClaimCouponCodeResult.generated.h"

USTRUCT(BlueprintType)
struct YAZUREFUNCTIONSUTILS_API FYClaimCouponCodeResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYClaimCouponCodeStatus Status;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Content;

    FYClaimCouponCodeResult();
};
