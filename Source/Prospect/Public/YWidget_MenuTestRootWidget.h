#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_MenuTestRootWidget.generated.h"

class UButton;
class UEditableTextBox;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_MenuTestRootWidget : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_openScreenButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_closeScreenButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* m_textBox01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* m_textBox02;
    
public:
    UYWidget_MenuTestRootWidget();

};

