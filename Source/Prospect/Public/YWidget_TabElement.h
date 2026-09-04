#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_TabElement.generated.h"

class UYWidget_Button;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_TabElement : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_Button* m_button;
    
    UYWidget_TabElement();

};

