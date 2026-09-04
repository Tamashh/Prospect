#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_ItemCategoryEntry.generated.h"

class UYButton;
class UYTextBlock;
class UYWidget_ItemCategoryEntry;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemCategoryEntry : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonClickedSignature, UYWidget_ItemCategoryEntry*, categoryEntryWidget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYButton* m_button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYTextBlock* m_text;
    
    UYWidget_ItemCategoryEntry();

    UFUNCTION(BlueprintCallable)
    void HandleButtonClick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowHardCurrencyIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsSelected(bool IsSelected);
    
};

