#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_InputKeySelector.generated.h"

class UTextBlock;
class UYInputKeySelector;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_InputKeySelector : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_actionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYInputKeySelector* m_mainBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYInputKeySelector* m_alternateBinding;
    
public:
    UYWidget_InputKeySelector();

private:
    UFUNCTION(BlueprintCallable)
    void OnIsSelectingKeyChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnIsSelectingAlternativeKeyChanged();
    
};

