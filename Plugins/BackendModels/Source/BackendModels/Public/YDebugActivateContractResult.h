#pragma once
#include "CoreMinimal.h"
#include "EYActivateContractRequestStatus.h"
#include "YActiveContractPlayerData.h"
#include "YCurrencyItem.h"
#include "YDebugActivateContractResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugActivateContractResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> changedCurrencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveContractPlayerData activatedContract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYActivateContractRequestStatus Status;
    
    BACKENDMODELS_API FYDebugActivateContractResult();
};

