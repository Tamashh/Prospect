#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YCostEntryRow.h"
#include "YTechTreeNodeUpgradeLevelRow.generated.h"

USTRUCT(BlueprintType)
struct FYTechTreeNodeUpgradeLevelRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_perkAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCostEntryRow> m_upgradeCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_upgradeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCostEntryRow> m_initialRushCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCostEntryRow> m_optionalRushCosts;
    
    PROSPECT_API FYTechTreeNodeUpgradeLevelRow();
};

