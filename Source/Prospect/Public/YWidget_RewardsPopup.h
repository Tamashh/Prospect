#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "Templates/SubclassOf.h"
#include "YClaimableVictimCompensation.h"
#include "YContractRow.h"
#include "YInsurancePayoutPackage.h"
#include "YInventoryItem.h"
#include "YPlayerFactionLevelUpData.h"
#include "YResourceExecutionInterface.h"
#include "YUnlocksPopupUiData.h"
#include "YWidget_RewardsPopup.generated.h"

class UYWidget_FactionContract;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_RewardsPopup : public UYWidget, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_ItemContainer> m_itemEntryWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FYInventoryItem> m_itemsToShow;
    
public:
    UYWidget_RewardsPopup();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowVictimCompensationPackagePopup(const FYClaimableVictimCompensation& victimCompensation);
    
    UFUNCTION(BlueprintCallable)
    void ShowTwitchDropPackagePopup(const TArray<FYInventoryItem>& GrantedItems);
    
    UFUNCTION(BlueprintCallable)
    void ShowStarterPackPackagePopup(const TArray<FYInventoryItem>& GrantedItems);
    
    UFUNCTION(BlueprintCallable)
    void ShowRewardsFTUE(const TArray<FYInventoryItem>& Items);
    
    UFUNCTION(BlueprintCallable)
    void ShowInsurancePackagePopup(const FYInsurancePayoutPackage& Package, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void ShowFactionLevelUp(const FYPlayerFactionLevelUpData& playerFactionLevelUpData);
    
    UFUNCTION(BlueprintCallable)
    void ShowDailyCratePopup(const FString& generatorId, const TArray<FYInventoryItem>& crateItems);
    
    UFUNCTION(BlueprintCallable)
    void OnClaimButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowUnlocksPopup(const FYUnlocksPopupUiData& unlocksPopupUiData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowRewardsPopup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowCollectedVictimCompensationClaimPopup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowCollectedTwitchDropClaimPopup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowCollectedStarterPackClaimPopup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowCollectedInsuranceClaimPopup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowCollectedDailyCratePopup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateUnlockedItem(const FYInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_FactionContract* BP_CreateUnlockedContract(const FYContractRow& contractConfigData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateInventoryItem(const FYInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ClearAddedRewardEntries();
    

    // Fix for true pure virtual functions not being implemented
};

