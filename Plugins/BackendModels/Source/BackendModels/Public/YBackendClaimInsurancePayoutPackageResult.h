#pragma once
#include "CoreMinimal.h"
#include "YBackendInsurancePayoutPackage.h"
#include "YBackendClaimInsurancePayoutPackageResult.generated.h"

USTRUCT(BlueprintType)
struct FYBackendClaimInsurancePayoutPackageResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYBackendInsurancePayoutPackage Package;
    
    BACKENDMODELS_API FYBackendClaimInsurancePayoutPackageResult();
};

