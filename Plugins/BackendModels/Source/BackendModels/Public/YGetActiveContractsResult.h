#pragma once
#include "CoreMinimal.h"
#include "YActiveContractPlayerData.h"
#include "YGetActiveContractsResult.generated.h"

USTRUCT(BlueprintType)
struct FYGetActiveContractsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYActiveContractPlayerData> contracts;
    
    BACKENDMODELS_API FYGetActiveContractsResult();
};

