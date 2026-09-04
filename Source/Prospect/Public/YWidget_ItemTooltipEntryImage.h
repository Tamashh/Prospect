#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemTooltipEntryBase.h"
#include "YWidget_ItemTooltipEntryImage.generated.h"

class UYWidget_ImageBase;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemTooltipEntryImage : public UYWidget_ItemTooltipEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ImageBase* m_image;
    
public:
    UYWidget_ItemTooltipEntryImage();

};

