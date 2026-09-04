#pragma once
#include "CoreMinimal.h"
#include "YBackendInsurancePayoutPackage.h"
#include "YBackendInsuranceClaims.generated.h"

USTRUCT(BlueprintType)
struct FYBackendInsuranceClaims {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYBackendInsurancePayoutPackage> packages;
    
    BACKENDMODELS_API FYBackendInsuranceClaims();
};

