#pragma once
#include "CoreMinimal.h"
#include "EYRegistrationStatus.h"
#include "YCheckMarketingRegistrationStatusResponse.generated.h"

USTRUCT(BlueprintType)
struct FYCheckMarketingRegistrationStatusResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYRegistrationStatus Status;

    BACKENDMODELS_API FYCheckMarketingRegistrationStatusResponse();
};
