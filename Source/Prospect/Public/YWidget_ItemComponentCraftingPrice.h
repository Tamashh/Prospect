#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "EYCraftingUnavailableReason.h"
#include "EYItemRarityType.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentCraftingPrice.generated.h"

class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentCraftingPrice : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showCurrencies;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useBackendData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UYWidget_ItemContainer*> m_currenciesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UYWidget_ItemContainer*> m_materialsMap;
    
public:
    UYWidget_ItemComponentCraftingPrice();

private:
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdated(const FString& UserId, const TArray<FYCustomItemInfo>& Items);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrenciesUpdated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Update(const bool canCraft, const EYCraftingUnavailableReason unavailableReason, const FText& unavailableReasonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddMaterialWidget(const EYItemRarityType rarity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddCurrencyWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ClearComponent();
    
};

