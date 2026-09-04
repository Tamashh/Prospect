#pragma once
#include "CoreMinimal.h"
#include "YActiveContractUIData.h"
#include "YActiveContractsUIData.generated.h"

USTRUCT(BlueprintType)
struct FYActiveContractsUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYActiveContractUIData> activeContracts;
    
    PROSPECT_API FYActiveContractsUIData();
};

