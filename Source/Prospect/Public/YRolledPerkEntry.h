#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YRolledPerkEntry.generated.h"

USTRUCT(BlueprintType)
struct FYRolledPerkEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_rolledRangeValue;
    
    PROSPECT_API FYRolledPerkEntry();
};

