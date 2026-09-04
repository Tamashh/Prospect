#pragma once
#include "CoreMinimal.h"
#include "EYItemRarityType.h"
#include "YDataTableRowBase.h"
#include "YRarityVisualizationData.h"
#include "YItemRarityDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYItemRarityDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYItemRarityType, FYRarityVisualizationData> m_visualizationData;
    
    PROSPECT_API FYItemRarityDataTableRow();
};

