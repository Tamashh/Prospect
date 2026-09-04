#pragma once
#include "CoreMinimal.h"
#include "YCraftedBlueprintInfo.h"
#include "YWidget.h"
#include "YResourceExecutionInterface.h"
#include "YWidget_WeaponShop.generated.h"

class UYWidget_BlueprintsOverview;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_WeaponShop : public UYWidget, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_BlueprintsOverview* m_blueprintsOverviewWidget;
    
public:
    UYWidget_WeaponShop();

protected:
    UFUNCTION(BlueprintCallable)
    void OnShopSet(const FName& shopId);
    
    UFUNCTION(BlueprintCallable)
    void OnBlueprintCraftedResult(const FYCraftedBlueprintInfo& craftedBlueprintInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleInventoryItemSelected(UYWidget_ItemContainer* itemWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_SetShopExternal(const FString& shopId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnShopIdSet(const FName& shopId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GoToNormalScreen();
    

    // Fix for true pure virtual functions not being implemented
};

