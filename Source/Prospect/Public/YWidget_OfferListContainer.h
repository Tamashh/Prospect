#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YResourceExecutionInterface.h"
#include "YWidget_OfferListContainer.generated.h"

class UUserWidget;
class UWidget;
class UWidgetSwitcher;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_OfferListContainer : public UYWidget, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClickedSignature, UYWidget_ItemContainer*, itemWidget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UWidget>> m_offerOverviewLayouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_layoutWidgetSwitcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_currentLayoutUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_ItemContainer*> m_itemContainers;
    
public:
    UYWidget_OfferListContainer();

    UFUNCTION(BlueprintCallable)
    void SetLayout(int32 layoutIdx);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOfferOverviewWidgetLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleItemClicked(UYWidget_ItemContainer* SelectedItem);
    

    // Fix for true pure virtual functions not being implemented
};

