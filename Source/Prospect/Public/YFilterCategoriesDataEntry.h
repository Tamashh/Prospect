#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationCategory.h"
#include "EYItemType.h"
#include "EYModificationSlotType.h"
#include "EYVanityType.h"
#include "YFilterCategoriesDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FYFilterCategoriesDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYCustomizationCategory> m_customizationCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYItemType> m_itemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYModificationSlotType> m_modSlotTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYVanityType> m_vanityTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_filterForTools;
    
    PROSPECT_API FYFilterCategoriesDataEntry();
};

