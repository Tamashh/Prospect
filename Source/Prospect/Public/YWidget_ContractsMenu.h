#pragma once
#include "CoreMinimal.h"
#include "EYClaimContractRewardsStatus.h"
#include "EYFaction.h"
#include "YActiveContractsUIData.h"
#include "YContractRow.h"
#include "YContractUiData.h"
#include "YResourceExecutionInterface.h"
#include "YWidgetView.h"
#include "YWidget_ContractsMenu.generated.h"

class UYWidget_FactionContract;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ContractsMenu : public UYWidgetView, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFaction m_faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useLatentWidgetCreation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FYContractUiData> m_contractsUiData;
    
public:
    UYWidget_ContractsMenu();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateContractsMenuAfterClaimFail(const FString& contractId, const EYClaimContractRewardsStatus& Status);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupBoardFaction(const FName& factionId);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReplaceContract(const FString& newContractId, bool contractLockedDueToLowFactionReputation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshContractsBoardMenu();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleContractsStatusChanged(const FYActiveContractsUIData& activeContractsUIData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateContractsMenuAfterContractRerolling(const FYContractUiData& newContractUiData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateContractsMenuAfterContractClaimFail(const FYContractRow& contractConfigData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateContractsMenuAfterContractCancelled(const FYContractUiData& cancelledActiveContractUiData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateContractsMenuAfterContractActivated(const FYContractUiData& contractUiData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowClaimedContractFeedbackAfterBackendResponse(const FYContractRow& claimedContractConfigData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFactionSet();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitializeBoard(EYFaction Faction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_FactionContract* BP_CreateSetAndAddContractEntry(const FYContractUiData& contractUiData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BoardInitDone();
    

    // Fix for true pure virtual functions not being implemented
};

