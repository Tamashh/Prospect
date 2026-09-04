#pragma once
#include "CoreMinimal.h"
#include "YClaimGeneratorIncomeClientRequest.generated.h"

USTRUCT(BlueprintType)
struct FYClaimGeneratorIncomeClientRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString generatorId;
    
    BACKENDMODELS_API FYClaimGeneratorIncomeClientRequest();
};

