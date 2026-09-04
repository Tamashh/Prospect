#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentTextFlavor.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentTextFlavor : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_flavorText;
    
public:
    UYWidget_ItemComponentTextFlavor();

};

