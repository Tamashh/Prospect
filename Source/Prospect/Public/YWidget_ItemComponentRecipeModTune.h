#pragma once
#include "CoreMinimal.h"
#include "EYCraftingUnavailableReason.h"
#include "EYItemRarityType.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentRecipeModTune.generated.h"

class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentRecipeModTune : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UYWidget_ItemContainer*> m_materialsMap;
    
public:
    UYWidget_ItemComponentRecipeModTune();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Update(const bool canCraft, const EYCraftingUnavailableReason unavailableReason, const FText& unavailableReasonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddMaterialWidget(const EYItemRarityType rarity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ClearComponent();
    
};

