#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YTimestamp.h"
#include "YBackendInsurancePayoutPackage.generated.h"

USTRUCT(BlueprintType)
struct FYBackendInsurancePayoutPackage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool processingSeenByUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool seenByUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 softCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool atLeastOneVoidedByOthers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool atLeastOneVoidedBySquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp unlockTimeUtc;
    
    BACKENDMODELS_API FYBackendInsurancePayoutPackage();
};

