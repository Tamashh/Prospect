#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentClickable.generated.h"

class UYButton;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentClickable : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYButton* m_button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_allowHoverOnly;
    
public:
    UYWidget_ItemComponentClickable();

    UFUNCTION(BlueprintCallable)
    void SetAllowHoverOnly(bool newState);
    
    UFUNCTION(BlueprintCallable)
    void OnItemUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnItemReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnItemPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnItemHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnItemDoubleClicked() const;
    
    UFUNCTION(BlueprintCallable)
    void OnItemClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsSelected(bool IsSelected);
    
};

