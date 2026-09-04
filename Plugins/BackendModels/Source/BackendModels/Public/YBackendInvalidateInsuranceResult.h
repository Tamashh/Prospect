#pragma once
#include "CoreMinimal.h"
#include "YBackendInvalidateInsuranceResult.generated.h"

USTRUCT(BlueprintType)
struct FYBackendInvalidateInsuranceResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYBackendInvalidateInsuranceResult();
};

