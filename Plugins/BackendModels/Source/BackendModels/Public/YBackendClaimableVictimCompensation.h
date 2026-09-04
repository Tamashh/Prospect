#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YCustomItemInfo.h"
#include "YBackendClaimableVictimCompensation.generated.h"

USTRUCT(BlueprintType)
struct FYBackendClaimableVictimCompensation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime snapshotTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString killerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 softCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> Items;
    
    BACKENDMODELS_API FYBackendClaimableVictimCompensation();
};

