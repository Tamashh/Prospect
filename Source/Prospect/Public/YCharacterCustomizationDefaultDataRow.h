#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYCustomizationCategory.h"
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYCustomizationCategory, FDataTableRowHandle> m_defaultItemsPerSlot;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_defaultFemaleBaseSuit;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_defaultMaleBaseSuit;

    PROSPECT_API FYCharacterCustomizationDefaultDataRow();
};

