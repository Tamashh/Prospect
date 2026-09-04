#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemTooltipEntryBase.h"
#include "YWidget_ItemTooltipEntryHeader.generated.h"

class UTextBlock;
class UYWidget_ValueDisplay;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemTooltipEntryHeader : public UYWidget_ItemTooltipEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_itemTypeTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_itemNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_itemSubTypeTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ValueDisplay* m_itemPrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_itemAmount;
    
public:
    UYWidget_ItemTooltipEntryHeader();

};

