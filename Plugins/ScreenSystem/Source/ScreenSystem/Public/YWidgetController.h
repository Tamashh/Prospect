#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YWidgetController.generated.h"

class UYWidget;

UCLASS(Blueprintable)
class SCREENSYSTEM_API UYWidgetController : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget* m_ownerWidget;
    
public:
    UYWidgetController();

protected:
    UFUNCTION(BlueprintCallable)
    void OnWidgetShown();
    
    UFUNCTION(BlueprintCallable)
    void OnWidgetHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWidgetShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWidgetInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWidgetHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWidgetClear();
    
};

