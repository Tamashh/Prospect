#pragma once
#include "CoreMinimal.h"
#include "YDebugRemoveAllActiveContractsResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugRemoveAllActiveContractsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> cancelledContractsIds;
    
    BACKENDMODELS_API FYDebugRemoveAllActiveContractsResult();
};

