#pragma once
#include "CoreMinimal.h"
#include "YOptionsMenuData.h"
#include "YWidgetProvider.h"
#include "YWidgetProvider_Options.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UYWidgetProvider_Options : public UYWidgetProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FYOptionsMenuData> m_menuData;
    
    UYWidgetProvider_Options();

    UFUNCTION(BlueprintCallable)
    void OnButtonAction(const FName ActionName, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnButtonAction(const FName ActionName, UUserWidget* Widget);
    
};

