#pragma once
#include "CoreMinimal.h"
#include "YGetCompletedContractsResult.generated.h"

USTRUCT(BlueprintType)
struct FYGetCompletedContractsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> contractsIds;
    
    BACKENDMODELS_API FYGetCompletedContractsResult();
};

