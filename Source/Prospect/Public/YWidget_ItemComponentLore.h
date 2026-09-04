#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentLore.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_ItemComponentLore : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_loreText;
    
public:
    UYWidget_ItemComponentLore();

};

