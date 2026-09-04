#pragma once
#include "CoreMinimal.h"
#include "YActiveContractInitData.generated.h"

USTRUCT(BlueprintType)
struct FYActiveContractInitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> contractCurrentProgressBackend;
    
    PROSPECT_API FYActiveContractInitData();
};

