#pragma once
#include "CoreMinimal.h"
#include "YDebugUpdateInsurancesResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugUpdateInsurancesResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    PROSPECT_API FYDebugUpdateInsurancesResult();
};

