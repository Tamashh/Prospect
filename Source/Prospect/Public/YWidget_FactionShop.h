#pragma once
#include "CoreMinimal.h"
#include "YWidget_WeaponShop.h"
#include "YWidget_FactionShop.generated.h"

class UYWidget_ItemDetailOverview;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_FactionShop : public UYWidget_WeaponShop {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemDetailOverview* m_itemDetailOverviewWidget;
    
public:
    UYWidget_FactionShop();

private:
    UFUNCTION(BlueprintCallable)
    void HandleBackButtonFromItemDetailOverview();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GoToDetailScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemDetailOverview* BP_CreateItemDetailOverview();
    
};

