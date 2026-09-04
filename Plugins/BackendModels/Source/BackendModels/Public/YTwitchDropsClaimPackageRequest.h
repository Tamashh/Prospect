#pragma once
#include "CoreMinimal.h"
#include "YTwitchDropsClaimPackageRequest.generated.h"

USTRUCT(BlueprintType)
struct FYTwitchDropsClaimPackageRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageId;
    
    BACKENDMODELS_API FYTwitchDropsClaimPackageRequest();
};

