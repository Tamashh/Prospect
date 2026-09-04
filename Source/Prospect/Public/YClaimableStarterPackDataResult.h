#pragma once
#include "CoreMinimal.h"
#include "YClaimableStarterPackPackageResult.h"
#include "YClaimableStarterPackDataResult.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYClaimableStarterPackDataResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYClaimableStarterPackPackageResult> packages;
    
    FYClaimableStarterPackDataResult();
};

