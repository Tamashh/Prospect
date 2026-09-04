#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYContractStatus.h"
#include "YContractReward.h"
#include "YContractRow.h"
#include "YContractUiData.h"
#include "YOnPressedAcceptButtonSignatureDelegate.h"
#include "YResourceExecutionInterface.h"
#include "YWidget_FactionContract.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_FactionContract : public UYWidget, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_contractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showEndOfChainRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYContractStatus m_currentContractStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnPressedAcceptButtonSignature OnPressedAcceptButton;
    
public:
    UYWidget_FactionContract();

protected:
    UFUNCTION(BlueprintCallable)
    void TryToCancelActiveContract();
    
    UFUNCTION(BlueprintCallable)
    void SendBackendReqToClaimCompletedActiveContractRewards();
    
    UFUNCTION(BlueprintCallable)
    void SendBackendReqToCancelActiveContract();
    
    UFUNCTION(BlueprintCallable)
    void SendBackendReqToActivateContract(const FYContractRow& contractConfigData);
    
    UFUNCTION(BlueprintCallable)
    void OnDeclineActiveContract();
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptedCancelActiveContract();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYContractStatus GetContractStatus() const;
    
    UFUNCTION(BlueprintCallable)
    void FillContractWithData(const FYContractUiData& contractUiData, const FString& callerContext);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetupContract(const FYContractUiData& contractUiData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSuccessfullyCancelledContract();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget* BP_CreateSetAndAddContractReward(const FYContractReward& contractReward, const bool showDivider);
    

    // Fix for true pure virtual functions not being implemented
};

