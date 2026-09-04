#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "OnCheckBoxStateChangedDelegate.h"
#include "YWidget_SettingsToggle.generated.h"

class UCheckBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SettingsToggle : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_textBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCheckBox* m_checkBox;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_labelText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCheckBoxStateChanged BP_OnNativeCheckboxStateChanged;
    
    UYWidget_SettingsToggle();

    UFUNCTION(BlueprintCallable)
    void SetCheckboxState(bool newState);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckboxStateChanged(bool IsChecked);
    
};

