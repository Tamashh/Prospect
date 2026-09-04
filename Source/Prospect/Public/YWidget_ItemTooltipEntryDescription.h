#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemTooltipEntryBase.h"
#include "YWidget_ItemTooltipEntryDescription.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemTooltipEntryDescription : public UYWidget_ItemTooltipEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_itemDescriptionTextBlock;
    
public:
    UYWidget_ItemTooltipEntryDescription();

};

