#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationCategory.h"
#include "YDataTableRowBase.h"
#include "YCharacterCustomizationSlotRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYCharacterCustomizationSlotRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCustomizationCategory m_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_defaultSocketAttachmentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_containColorSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_visualizedOnlyAtCustomizationItemPreview;
    
    PROSPECT_API FYCharacterCustomizationSlotRow();
};

