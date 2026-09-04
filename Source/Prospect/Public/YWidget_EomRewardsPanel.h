#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_EomRewardsPanel.generated.h"

class UHorizontalBox;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_EomRewardsPanel : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_mainHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_ItemContainer*> m_rewardEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_expandElementsToFullWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_displayRarityHeaders;
    
public:
    UYWidget_EomRewardsPanel();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<UYWidget_ItemContainer*> GetRewardWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateAvailableRarities(const bool hasCommonMaterials, const bool hasUncommonMaterials, const bool hasRareMaterials);
    
};

