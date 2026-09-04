#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "Templates/SubclassOf.h"
#include "YWidget_GameTipPanel.generated.h"

class UDataTable;
class UPanelWidget;
class UYWidget_GameTipItem;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_GameTipPanel : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_GameTipItem> m_itemWidgetClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_itemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> m_tipDataTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_tipDataTable;
    
public:
    UYWidget_GameTipPanel();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowNextItem();
    
    UFUNCTION(BlueprintCallable)
    void OnItemHidden();
    
};

