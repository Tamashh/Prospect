#pragma once
#include "CoreMinimal.h"
#include "YActiveContractPlayerData.h"
#include "YActiveContractsInfoUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYActiveContractsInfoUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYActiveContractPlayerData> activeContracts;
    
    BACKENDMODELS_API FYActiveContractsInfoUpdated();
};

