#pragma once
#include "CoreMinimal.h"
#include "YClaimCouponCodeRequest.generated.h"

USTRUCT(BlueprintType)
struct YAZUREFUNCTIONSUTILS_API FYClaimCouponCodeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CouponCode;

    FYClaimCouponCodeRequest();
};
