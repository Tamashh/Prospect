#pragma once
#include "CoreMinimal.h"
#include "YActiveContractPlayerData.generated.h"

USTRUCT(BlueprintType)
struct FYActiveContractPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> progress;
    
    BACKENDMODELS_API FYActiveContractPlayerData();
};

