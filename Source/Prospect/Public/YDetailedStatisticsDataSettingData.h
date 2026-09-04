#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYItemStatsCategory.h"
#include "YStatsTypeDataEntry.h"
#include "YDetailedStatisticsDataSettingData.generated.h"

USTRUCT(BlueprintType)
struct FYDetailedStatisticsDataSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYStatsTypeDataEntry> m_entires;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemStatsCategory m_category;
    
    PROSPECT_API FYDetailedStatisticsDataSettingData();
};

