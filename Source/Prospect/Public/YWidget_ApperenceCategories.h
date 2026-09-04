#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYApperenceCategoriesTypes.h"
#include "YWidget_ApperenceCategories.generated.h"

class UYWidget_ItemCategoryEntry;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ApperenceCategories : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCategoryApperenceCategoriesClicked, EYApperenceCategoriesTypes, Type);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYApperenceCategoriesTypes> m_supportedCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemCategoryEntry* m_selectedItemCategory;
    
public:
    UYWidget_ApperenceCategories();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleCategoryClicked(UYWidget_ItemCategoryEntry* categoryEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemCategoryEntry* BP_CreateAndAddItemCategoryEntry();
    
};

