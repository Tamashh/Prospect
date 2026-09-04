#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "YWidget.h"
#include "YOnSetItemFilterButtonClickedDelegate.h"
#include "YWidget_SetItemFilterButton.generated.h"

class APlayerState;
class UYStateInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SetItemFilterButton : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnSetItemFilterButtonClicked OnSetItemFilterButtonClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemType m_typeToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_labelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showItemAmount;
    
public:
    UYWidget_SetItemFilterButton();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSet(APlayerState* State);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdate(UYStateInventoryComponent* stateInventoryComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetItemAmountForSpecificType(const int32 itemAmount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_IsSelected(bool IsSelected);
    
};

