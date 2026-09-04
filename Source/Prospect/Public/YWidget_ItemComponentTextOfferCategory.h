#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentTextOfferCategory.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentTextOfferCategory : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_offerCategoryText;
    
public:
    UYWidget_ItemComponentTextOfferCategory();

};

