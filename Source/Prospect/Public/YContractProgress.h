#pragma once
#include "CoreMinimal.h"
#include "YContractProgress.generated.h"

USTRUCT(BlueprintType)
struct FYContractProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> objectivesProgress;
    
    PROSPECT_API FYContractProgress();
};

