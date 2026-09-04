#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYCraftingUnavailableReason.h"
#include "ItemLockInfo.generated.h"

USTRUCT(BlueprintType)
struct FItemLockInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCraftingUnavailableReason m_lockReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_contract;
    
    PROSPECT_API FItemLockInfo();
};

