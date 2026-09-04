#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationCategory.h"
#include "YCharacterArchetypeDefaultItemEntry.h"
#include "YCharacterCustomizationSetItem.h"
#include "YVanityItemRowBase.h"
#include "YCharacterCustomizationSetRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYCharacterCustomizationSetRow : public FYVanityItemRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCustomizationCategory m_customizationCategoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> m_colorVariationIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCharacterCustomizationSetItem> m_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYCustomizationCategory, FYCharacterArchetypeDefaultItemEntry> m_lockAndSetCustomizationCategorySlotsTo;
    
    PROSPECT_API FYCharacterCustomizationSetRow();
};

