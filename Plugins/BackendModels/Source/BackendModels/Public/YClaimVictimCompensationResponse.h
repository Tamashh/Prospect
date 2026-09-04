#pragma once
#include "CoreMinimal.h"
#include "YBackendClaimableVictimCompensation.h"
#include "YClaimVictimCompensationResponse.generated.h"

USTRUCT(BlueprintType)
struct FYClaimVictimCompensationResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYBackendClaimableVictimCompensation claimedPackage;
    
    BACKENDMODELS_API FYClaimVictimCompensationResponse();
};

