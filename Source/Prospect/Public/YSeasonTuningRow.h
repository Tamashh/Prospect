#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDataTableRowBase.h"
#include "YSeasonTuningRow.generated.h"

USTRUCT(BlueprintType)
struct FYSeasonTuningRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_currentActiveSeasonNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_activeSeasonRow;
    
    PROSPECT_API FYSeasonTuningRow();
};

