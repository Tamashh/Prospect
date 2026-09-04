#pragma once
#include "CoreMinimal.h"
#include "YUpdatePlayerActiveContractsResult.generated.h"

USTRUCT(BlueprintType)
struct FYUpdatePlayerActiveContractsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    BACKENDMODELS_API FYUpdatePlayerActiveContractsResult();
};

