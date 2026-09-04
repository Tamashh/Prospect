#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_MenuTestScreen2Widget.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_MenuTestScreen2Widget : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_openScreenButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_closeScreenButton;
    
public:
    UYWidget_MenuTestScreen2Widget();

};

