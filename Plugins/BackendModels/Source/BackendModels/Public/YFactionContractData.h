#pragma once
#include "CoreMinimal.h"
#include "YFactionContractData.generated.h"

USTRUCT(BlueprintType)
struct FYFactionContractData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    BACKENDMODELS_API FYFactionContractData();
};

