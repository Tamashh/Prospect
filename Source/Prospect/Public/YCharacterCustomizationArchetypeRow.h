#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationBodyType.h"
#include "EYCustomizationCategory.h"
#include "Engine/DataTable.h"
#include "YCharacterArchetypeDefaultItemEntry.h"
#include "YVanityItemRowBase.h"
#include "YCharacterCustomizationArchetypeRow.generated.h"

USTRUCT(BlueprintType)
struct FYCharacterCustomizationArchetypeRow : public FYVanityItemRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCustomizationBodyType m_bodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_headItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_baseSuitItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYCustomizationCategory, FDataTableRowHandle> m_defaultItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYCustomizationCategory, FYCharacterArchetypeDefaultItemEntry> m_startingItems;
    
    PROSPECT_API FYCharacterCustomizationArchetypeRow();
};

