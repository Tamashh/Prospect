#pragma once
#include "CoreMinimal.h"
#include "YRegisterForMarketingRequest.generated.h"

USTRUCT(BlueprintType)
struct FYRegisterForMarketingRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Email;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Locale;

    BACKENDMODELS_API FYRegisterForMarketingRequest();
};
