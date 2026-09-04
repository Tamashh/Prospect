#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentTextModType.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentTextModType : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_modTypeText;
    
public:
    UYWidget_ItemComponentTextModType();

};

