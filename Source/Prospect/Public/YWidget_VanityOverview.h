#pragma once
#include "CoreMinimal.h"
#include "EYVanityType.h"
#include "YWidget.h"
#include "EYApperenceCategoriesTypes.h"
#include "EYVanitySelectionState.h"
#include "OnBackButtonPressedDelegate.h"
#include "OnCategorySlotClickedDelegate.h"
#include "YInterfaceSceneState.h"
#include "YUpdateVanityData.h"
#include "YWidget_VanityOverview.generated.h"

class UPanelWidget;
class UTextBlock;
class UYWidget_ItemContainer;
class UYWidget_VanityCategoryListSelection;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_VanityOverview : public UYWidget, public IYInterfaceSceneState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCategorySlotClicked OnCategorySlotClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_VanityCategoryListSelection* m_listSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_categoriesPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_vanityDescriptionText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackButtonPressed BP_OnBackButtonPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_setCameraForVanityItemOnCategoryHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYApperenceCategoriesTypes m_apperenceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_currentSelectedSlotId;
    
public:
    UYWidget_VanityOverview();

protected:
    UFUNCTION(BlueprintCallable)
    void SetVanitySelectionState(EYVanitySelectionState selectionState, bool resetVanity);
    
    UFUNCTION(BlueprintCallable)
    void OnVanityUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnVanityCategoryUpdated(const TArray<EYVanityType>& updatedVanityTypes);
    
    UFUNCTION(BlueprintCallable)
    void OnItemHovered(FYUpdateVanityData Data, bool hover);
    
    UFUNCTION(BlueprintCallable)
    void OnItemClicked(FYUpdateVanityData Data);
    
    UFUNCTION(BlueprintCallable)
    void OnCategoryHover(UYWidget_ItemContainer* itemContainer, bool Hovered);
    
    UFUNCTION(BlueprintCallable)
    void OnCategoryClicked(UYWidget_ItemContainer* itemContainer);
    

    // Fix for true pure virtual functions not being implemented
};

