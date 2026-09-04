#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationBodyType.h"
#include "EYCustomizationCategory.h"
#include "Engine/DataTable.h"
#include "YCharacterArchetypeDefaultItemEntry.h"
#include "YVanityItemRowBase.h"
#include "YCharacterExplicitCustomizationDataRow.generated.h"

USTRUCT(BlueprintType)
struct FYCharacterExplicitCustomizationDataRow : public FYVanityItemRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCustomizationBodyType m_bodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYCustomizationCategory, FYCharacterArchetypeDefaultItemEntry> m_defaultItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_randomItemSelection;
    
    PROSPECT_API FYCharacterExplicitCustomizationDataRow();
};

