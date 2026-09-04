#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YInventoryItem.h"
#include "YClaimableVictimCompensation.generated.h"

USTRUCT(BlueprintType)
struct FYClaimableVictimCompensation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_snapshotTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_killerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_softCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_items;
    
    PROSPECT_API FYClaimableVictimCompensation();
};

