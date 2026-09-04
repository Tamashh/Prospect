#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_Button.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Button : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_button;
    
    UYWidget_Button();

};

