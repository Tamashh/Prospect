#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EscMenuButtonData.h"
#include "YWidget_EscapeMenuItem.generated.h"

class UYButton;
class UYWidget_EscapeMenuItem;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_EscapeMenuItem : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMenuItemActionDelegate, UYWidget_EscapeMenuItem*, targetItem);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYButton* m_button;
    
    UYWidget_EscapeMenuItem();

    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetData(const FEscMenuButtonData& itemData);
    
};

