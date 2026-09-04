#pragma once
#include "CoreMinimal.h"
#include "YContractProgressData.generated.h"

USTRUCT(BlueprintType)
struct FYContractProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> newProgress;
    
    BACKENDMODELS_API FYContractProgressData();
};

