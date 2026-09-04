#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "EYWheelType.h"
#include "Templates/SubclassOf.h"
#include "YWidget_CommWheel.generated.h"

class APlayerState;
class UCanvasPanel;
class UDataTable;
class UImage;
class UPanelSlot;
class UUserWidget;
class UYPlayerSocialStationComponent;
class UYWidget_CommWheelItem;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_CommWheel : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYWheelType m_activeWheelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_distanceFromCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_deadZoneCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_listenToWheelInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_commWheelItemsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_selectorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPanelSlot*> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_CommWheelItem> m_commWheelItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_separatorWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> m_subCommWheelStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_CommWheelItem* m_centralWheelItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_CommWheelItem* m_selectedWheelItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_selectedRowHandleForVanitySelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerSocialStationComponent* m_socialComponent;
    
public:
    UYWidget_CommWheel();

protected:
    UFUNCTION(BlueprintCallable)
    void SetSelectedItem(UYWidget_CommWheelItem* Item, bool PlaySound);
    
    UFUNCTION(BlueprintCallable)
    void OpenCommWheel(EYWheelType wheelItemType);
    
    UFUNCTION(BlueprintCallable)
    void OnItemMouseHoveredOverStateChanged(UYWidget_CommWheelItem* Item, bool isMouseOver);
    
    UFUNCTION(BlueprintCallable)
    void CloseSpecificCommWheelButTryPlaySelectedtem(EYWheelType Type);
    
    UFUNCTION(BlueprintCallable)
    void CloseCommWheelButTryPlaySelectedtem();
    
    UFUNCTION(BlueprintCallable)
    void CloseCommWheel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetWheelTitle(EYWheelType wheelType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetPlayerData(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCommWheelStackReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCommWheelStackRemovedLastEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCommWheelStackAdd(const FText& nameOfCommWHeelToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActiveWheelChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ClearPlayerData();
    
};

