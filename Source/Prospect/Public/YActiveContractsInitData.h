#pragma once
#include "CoreMinimal.h"
#include "YActiveContractInitData.h"
#include "YActiveContractsInitData.generated.h"

USTRUCT(BlueprintType)
struct FYActiveContractsInitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYActiveContractInitData> activeContracts;
    
    PROSPECT_API FYActiveContractsInitData();
};

