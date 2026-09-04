#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYItemTooltipType.h"
#include "YWidget_ItemTooltipContainer.generated.h"

class UTextBlock;
class UYWidget_ItemTooltipEntryDescription;
class UYWidget_ItemTooltipEntryHeader;
class UYWidget_ItemTooltipEntryImage;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemTooltipContainer : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemTooltipEntryHeader* m_headerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemTooltipEntryDescription* m_descriptionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemTooltipEntryDescription* m_flavorTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemTooltipEntryImage* m_imageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_incompatibleModTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemTooltipType m_itemTooltipType;
    
public:
    UYWidget_ItemTooltipContainer();

};

