#pragma once
#include "CoreMinimal.h"
#include "YRefreshVictimCompensationPackageRequest.generated.h"

USTRUCT(BlueprintType)
struct FYRefreshVictimCompensationPackageRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYRefreshVictimCompensationPackageRequest();
};

