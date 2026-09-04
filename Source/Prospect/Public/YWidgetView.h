#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "Templates/SubclassOf.h"
#include "YWidgetView.generated.h"

class UYWidgetProvider;

UCLASS(Blueprintable, EditInlineNew)
class UYWidgetView : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidgetProvider> m_widgetProviderClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UYWidget*> m_registeredWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYWidgetProvider* m_widgetProvider;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UYWidgetProvider>> m_requestedProviders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_wantsToAnimateVisibilityWithParent;
    
public:
    UYWidgetView();

private:
    UFUNCTION(BlueprintCallable)
    void UnregisterWidgetProvider(UYWidgetProvider* provider);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterWidgetByName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    UYWidgetProvider* RequestWidgetProvider(TSubclassOf<UYWidgetProvider> providerClass, const FString& callerContext, bool shouldRefreshData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ReleaseWidgetProvider(TSubclassOf<UYWidgetProvider> providerClass) const;
    
    UFUNCTION(BlueprintCallable)
    void RegisterWidget(FName Name, UYWidget* Widget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnProviderDataChanged(const FName& DataName, const FName& dataType);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UYWidget*> GetWidgetsByClass(TSubclassOf<UYWidget> WidgetClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYWidget* GetWidgetByNameAndClass(FName Name, TSubclassOf<UYWidget> WidgetClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYWidget* GetWidgetByName(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameForWidget(UYWidget* Widget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYWidgetProvider* GetAssociatedWidgetProvider(TSubclassOf<UYWidgetProvider> providerClass) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearWidgetRegistry();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RegisterChildren();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWidgetStartShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWidgetStartHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnProviderDataChanged(const FName& DataName, const FName& dataType);
    
};

