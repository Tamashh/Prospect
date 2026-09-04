#pragma once
#include "CoreMinimal.h"
#include "EYContractStatus.h"
#include "YActiveContractUIData.generated.h"

USTRUCT(BlueprintType)
struct FYActiveContractUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYContractStatus contractStatus;
    
    PROSPECT_API FYActiveContractUIData();
};

