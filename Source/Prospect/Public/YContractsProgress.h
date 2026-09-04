#pragma once
#include "CoreMinimal.h"
#include "YContractProgress.h"
#include "YContractsProgress.generated.h"

USTRUCT(BlueprintType)
struct FYContractsProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYContractProgress> activeContractsProgressClamp;
    
    PROSPECT_API FYContractsProgress();
};

