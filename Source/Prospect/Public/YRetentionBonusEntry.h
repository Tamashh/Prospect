#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYRetentionBonusEntryType.h"
#include "YRetentionBonusEntry.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYRetentionBonusEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYRetentionBonusEntryType m_rewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rewardHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_rewardHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_persistent;
    
    FYRetentionBonusEntry();
};

