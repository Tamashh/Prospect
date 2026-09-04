#pragma once
#include "CoreMinimal.h"
#include "EYVanityType.h"
#include "OnBackButtonClickedDelegate.h"
#include "OnVanityItemClickedDelegate.h"
#include "OnVanityItemHoveredDelegate.h"
#include "Templates/SubclassOf.h"
#include "YWidget_ItemContainer.h"
#include "YWidget_VanityCategoryListSelection.generated.h"

class UPanelWidget;
class UYWidget_SimpleHeadline;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_VanityCategoryListSelection : public UYWidget_ItemContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYVanityType m_activeCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SimpleHeadline* m_headline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_ItemContainer> m_customizationEntryClass;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackButtonClicked OnBackButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVanityItemClicked OnVanityItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVanityItemHovered OnVanityItemHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_containEmptyItem;
    
    UYWidget_VanityCategoryListSelection();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEntryItemHovered(UYWidget_ItemContainer* container, bool hover);
    
    UFUNCTION(BlueprintCallable)
    void OnEntryItemClicked(UYWidget_ItemContainer* container);
    
};

