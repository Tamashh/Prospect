#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YClaimableStarterPackPackageResult.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYClaimableStarterPackPackageResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString bundleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp unlockTimeUtc;
    
    FYClaimableStarterPackPackageResult();
};

