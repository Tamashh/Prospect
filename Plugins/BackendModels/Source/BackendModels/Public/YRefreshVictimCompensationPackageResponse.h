#pragma once
#include "CoreMinimal.h"
#include "YRefreshVictimCompensationPackageResponse.generated.h"

USTRUCT(BlueprintType)
struct FYRefreshVictimCompensationPackageResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    BACKENDMODELS_API FYRefreshVictimCompensationPackageResponse();
};

