#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDataTableRowBase.h"
#include "YCharacterCustomizationDefaultDataRow.generated.h"

USTRUCT(BlueprintType)
struct FYCharacterCustomizationDefaultDataRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_defaultArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxAmountOfSlots;
    
    PROSPECT_API FYCharacterCustomizationDefaultDataRow();
};

