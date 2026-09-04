#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "YWidget.h"
#include "Templates/SubclassOf.h"
#include "YWidget_ItemsOverview.generated.h"

class UComboBoxString;
class UYWidget_ItemCategories;
class UYWidget_ItemContainer;
class UYWidget_ItemListContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemsOverview : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemSelectedSignature, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemModifyRequest, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemEquipRequest, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemDoubleClickedSignature, UYWidget_ItemContainer*, itemWidget);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemListContainer* m_itemsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemListContainer* m_specialCraftingBlueprintsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_ItemListContainer*> m_factionCraftingBlueprintListContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* m_sortByComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* m_deviceCategoryFilterComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* m_miscCategoryFilterComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UComboBoxString* m_factionsFilterComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hideItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hideBlueprints;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_ItemCategories> m_itemCategoriesClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_selectedItem;
    
public:
    UYWidget_ItemsOverview();

    UFUNCTION(BlueprintCallable)
    void HandleItemSelected(UYWidget_ItemContainer* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemDoubleClicked(UYWidget_ItemContainer* SelectedItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetSelectedItemType(const EYItemType ItemType, int32 slotIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAssociatedFactionSet(const FName factionId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddUnequipWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddItemWidget(EYItemType ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddItemInfoWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemCategories* BP_CreateAndAddItemCategoriesWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemListContainer* BP_CreateAndAddCraftingBlueprintListContainerWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddBlueprintWidget(EYItemType ItemType, UYWidget_ItemListContainer* craftingBlueprintContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddBlueprintItemInfoWidget();
    
};

