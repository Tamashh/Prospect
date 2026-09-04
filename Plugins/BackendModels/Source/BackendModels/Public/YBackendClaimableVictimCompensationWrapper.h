#pragma once
#include "CoreMinimal.h"
#include "YBackendClaimableVictimCompensation.h"
#include "YBackendClaimableVictimCompensationWrapper.generated.h"

USTRUCT(BlueprintType)
struct FYBackendClaimableVictimCompensationWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYBackendClaimableVictimCompensation> packages;
    
    BACKENDMODELS_API FYBackendClaimableVictimCompensationWrapper();
};

