#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YDebugSetActiveContractProgressResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetActiveContractProgressResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 newProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> updatedItems;
    
    BACKENDMODELS_API FYDebugSetActiveContractProgressResult();
};

