#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YRetentionBonusEntry.h"
#include "YRetentionBonusRow.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYRetentionBonusRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRetentionBonusEntry> m_rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_active;
    
    FYRetentionBonusRow();
};

