#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_DropDown.generated.h"

class UComboBoxString;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_DropDown : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* m_comboBox;
    
    UYWidget_DropDown();

};

