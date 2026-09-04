#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWeightedRowHandle.generated.h"

USTRUCT(BlueprintType)
struct FYWeightedRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spawnWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spawnChanceInPercent;
    
    PROSPECT_API FYWeightedRowHandle();
};

