#pragma once
#include "CoreMinimal.h"
#include "EYRegistrationResult.h"
#include "YRegisterForMarketingResponse.generated.h"

USTRUCT(BlueprintType)
struct FYRegisterForMarketingResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYRegistrationResult Result;

    BACKENDMODELS_API FYRegisterForMarketingResponse();
};
