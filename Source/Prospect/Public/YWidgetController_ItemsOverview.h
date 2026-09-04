#pragma once
#include "CoreMinimal.h"
#include "EYDeviceClass.h"
#include "EYItemType.h"
#include "EYMiscellaneousType.h"
#include "EYVanityType.h"
#include "YCustomItemInfo.h"
#include "YLoreBackendItemInfo.h"
#include "YWidgetController.h"
#include "Types/SlateEnums.h"
#include "YResourceExecutionInterface.h"
#include "YWidgetController_ItemsOverview.generated.h"

class UYWidget_ItemContainer;

UCLASS(Blueprintable)
class UYWidgetController_ItemsOverview : public UYWidgetController, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_cachedSelectedItemContainer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UYWidget_ItemContainer*> m_blueprintItemWidgetsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UYWidget_ItemContainer*> m_itemWidgetsMap;
    
public:
    UYWidgetController_ItemsOverview();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUnlockedBlueprintsUpdated(const TArray<FName>& unlockedBlueprints);
    
    UFUNCTION(BlueprintCallable)
    void OnLoreItemsUpdated(const TArray<FYLoreBackendItemInfo>& loreItems);
    
    UFUNCTION(BlueprintCallable)
    void OnItemsRemoved(const FString& UserId, const TArray<FString>& removedItems);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdated(const FString& UserId, const TArray<FYCustomItemInfo>& Items);
    
    UFUNCTION(BlueprintCallable)
    void HandleSortingCriteriaRequested(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemModifyRequest(UYWidget_ItemContainer* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemHovered(UYWidget_ItemContainer* hoveredItem, bool Hovered);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemEquipRequest(UYWidget_ItemContainer* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemDoubleClicked(UYWidget_ItemContainer* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemClicked(UYWidget_ItemContainer* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleFilterSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleCategorySelected(EYItemType selectedCategory, EYDeviceClass deviceClass, EYMiscellaneousType miscType, EYVanityType vanityType);
    

    // Fix for true pure virtual functions not being implemented
};

