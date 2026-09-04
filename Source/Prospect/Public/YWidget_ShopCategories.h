#pragma once
#include "CoreMinimal.h"
#include "EYShopCategory.h"
#include "YWidget.h"
#include "YWidget_ShopCategories.generated.h"

class UYWidget_ItemCategoryEntry;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ShopCategories : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCategorySelectedSignature, EYShopCategory, Category);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYShopCategory> m_supportedCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemCategoryEntry* m_selectedItemCategory;
    
public:
    UYWidget_ShopCategories();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleCategoryClicked(UYWidget_ItemCategoryEntry* categoryEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemCategoryEntry* BP_CreateAndAddItemCategoryEntry();
    
};

