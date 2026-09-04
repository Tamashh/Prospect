#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "Templates/SubclassOf.h"
#include "YWidget_RebindKeys.generated.h"

class UButton;
class UPanelWidget;
class UYInputKeySelector;
class UYWidget_InputKeySelector;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_RebindKeys : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_restoreHotkeysButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_InputKeySelector> m_inputSelectorWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_keySelectorPanel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_InputKeySelector*> m_keySelectorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYInputKeySelector*> m_requestedBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_missingBindings;
    
public:
    UYWidget_RebindKeys();

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerResetHotkeys();
    
private:
    UFUNCTION(BlueprintCallable)
    void RevertPendingBindings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHotkeysRestored();
    
    UFUNCTION(BlueprintCallable)
    void OnHotkeysResaved();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleKeyUnassigned(UYInputKeySelector* selector);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPendingBindings();
    
};

