#pragma once
#include "CoreMinimal.h"
#include "EYItemStatsType.h"
#include "YItemStatsAssociationEntry.h"
#include "YItemStatsAssociationCollection.generated.h"

class UYWidget_ItemComponentStatsContainer;

USTRUCT(BlueprintType)
struct FYItemStatsAssociationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UYWidget_ItemComponentStatsContainer> m_defaultItemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYItemStatsAssociationEntry> m_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYItemStatsType> m_detailedStatisticsTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_wantsToShowDetailStatistics;
    
    PROSPECT_API FYItemStatsAssociationCollection();
};

