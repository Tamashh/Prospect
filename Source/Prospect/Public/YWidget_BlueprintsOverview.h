#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "YCustomItemInfo.h"
#include "YWidget.h"
#include "Templates/SubclassOf.h"
#include "YResourceExecutionInterface.h"
#include "YShopBlueprintData.h"
#include "YWidget_BlueprintsOverview.generated.h"

class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_BlueprintsOverview : public UYWidget, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemSelectedSignature, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemDoubleClickedSignature, UYWidget_ItemContainer*, itemWidget);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_ItemContainer> m_blueprintEntryWBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_onlyBlueprints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYItemType> m_filterOutItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemType m_itemTypeFilter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_ItemContainer*> m_itemEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FYShopBlueprintData> m_blueprintsUiData;
    
public:
    UYWidget_BlueprintsOverview();

protected:
    UFUNCTION(BlueprintCallable)
    void SetShop(const FName& shopId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdated(const FString& UserId, const TArray<FYCustomItemInfo>& Items);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitShopForBlueprintsOverview(const FName& shopId);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleItemDoubleClicked(UYWidget_ItemContainer* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemClicked(UYWidget_ItemContainer* SelectedItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInventoryUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddWidgetEntry();
    

    // Fix for true pure virtual functions not being implemented
};

