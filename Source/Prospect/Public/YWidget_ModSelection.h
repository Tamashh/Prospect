#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_ModSelection.generated.h"

class URichTextBlock;
class UYWidgetController_ItemsOverviewMods;
class UYWidget_ItemActionsPanel;
class UYWidget_ItemContainer;
class UYWidget_ItemsOverview;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ModSelection : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSelectionClosedSignature);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectionClosedSignature OnSelectionClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemsOverview* m_itemsOverviewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYWidgetController_ItemsOverviewMods* m_itemsOverviewWidgetController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemActionsPanel* m_itemActionsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* m_headlineText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_itemContainerToMod;
    
public:
    UYWidget_ModSelection();

    UFUNCTION(BlueprintCallable)
    void HandleUnequipButtonClicked(UYWidget_ItemContainer* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleEquipButtonClicked(UYWidget_ItemContainer* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleBackButtonWidgetClicked();
    
};

