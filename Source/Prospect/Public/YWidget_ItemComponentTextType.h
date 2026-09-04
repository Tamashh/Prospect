#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentTextType.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentTextType : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_typeText;
    
public:
    UYWidget_ItemComponentTextType();

};

