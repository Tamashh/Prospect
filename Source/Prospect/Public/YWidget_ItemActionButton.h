#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYItemActionType.h"
#include "YWidget_ItemActionButton.generated.h"

class UButton;
class USlateWidgetStyleAsset;
class UTextBlock;
class UYWidget_ItemActionButton;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemActionButton : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemActionButtonClicked, UYWidget_ItemActionButton*, Button);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_itemActionButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_itemActionButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemActionType m_itemActionType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* m_deactivatedButtonStyleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* m_neutralButtonStyleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* m_dangerButtonStyleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* m_highlightButtonStyleAsset;
    
public:
    UYWidget_ItemActionButton();

private:
    UFUNCTION(BlueprintCallable)
    void SetTextByActionType(EYItemActionType actionType);
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked();
    
};

