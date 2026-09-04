#pragma once
#include "CoreMinimal.h"
#include "YWidgetProvider.h"
#include "YWidgetProvider_Station.generated.h"

UCLASS(Blueprintable)
class UYWidgetProvider_Station : public UYWidgetProvider {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYStashOpened);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYInventoryToggled, bool, isInventoryOpen);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStashOpened OnStashOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryToggled OnInventoryToggledEvent;
    
    UYWidgetProvider_Station();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StashOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOpenShop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOpenObjectiveList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOpenInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOpenFortunaPass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOpenAurumShop() const;
    
    UFUNCTION(BlueprintCallable)
    void SetShouldOpenShop(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldOpenObjectiveList(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldOpenInventory(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldOpenFortunaPass(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldOpenAurumShop(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStartFromQuickMenu(bool Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnToggleStationShop();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleStationObjectiveList();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleStationInventory();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleStationFortunaPass();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsStartFromQuickMenu() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ToggleShop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ToggleObjectiveList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ToggleInventoryMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ToggleFortunaPass();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ToggleAurumShop();
    
};

