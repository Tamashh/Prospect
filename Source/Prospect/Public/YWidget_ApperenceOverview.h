#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYApperenceCategoriesTypes.h"
#include "YInterfaceSceneState.h"
#include "YWidget_ApperenceOverview.generated.h"

class UYWidget_ApperenceCategories;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_ApperenceOverview : public UYWidget, public IYInterfaceSceneState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ApperenceCategories* m_itemCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EYApperenceCategoriesTypes, UYWidget*> m_widgetPerType;
    
public:
    UYWidget_ApperenceOverview();

    UFUNCTION(BlueprintCallable)
    void OnCategoryClicked(EYApperenceCategoriesTypes Type);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget* BP_CreateAndAddEntryFor(EYApperenceCategoriesTypes Type);
    

    // Fix for true pure virtual functions not being implemented
};

