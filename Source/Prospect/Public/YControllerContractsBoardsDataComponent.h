#pragma once
#include "CoreMinimal.h"
#include "EYClaimContractRewardsStatus.h"
#include "Components/ActorComponent.h"
#include "YClaimedContractBackendData.h"
#include "YContractStatusChangeInfo.h"
#include "YOnBackendContractStatusChangeResponseReceivedSignatureDelegate.h"
#include "YOnBoardTimerRefreshUpdateDelegate.h"
#include "YOnContractsTimerReachedZeroSignatureDelegate.h"
#include "YPlayerContractsInitData.h"
#include "YPlayerFactionProgressionUIData.h"
#include "YControllerContractsBoardsDataComponent.generated.h"

class AActor;
class UYControllerContractsBoardsDataComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerContractsBoardsDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnBackendContractStatusChangeResponseReceivedSignature OnBackendContractStatusChangeResponseReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnContractsTimerReachedZeroSignature OnContractsTimerReachedZero;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnBoardTimerRefreshUpdate OnBoardTimerRefreshUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_minutesUntilRefresh;
    
    UYControllerContractsBoardsDataComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdateCachedBoardDataLockedState(const FYPlayerFactionProgressionUIData& playerFactionProgressionUIData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TryRequestActiveObjectivesAndBoardsData(bool forceRequest) const;
    
    UFUNCTION(BlueprintCallable)
    void RequestClaimCompletedActiveContract(const FString& contractId);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivateContract(const FString& contractId);
    
private:
    UFUNCTION(BlueprintCallable)
    void RefreshTimerDisplay();
    
    UFUNCTION(BlueprintCallable)
    void OnBoardRefreshTimerElapsed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasContractPendingBackendReply(const FString& contractId) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerContractsReceived(const FYPlayerContractsInitData& playerContractsInitData);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerContractClaimFail(const FString& UserId, const FString& contractId, EYClaimContractRewardsStatus contractRewardsStatus);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerContractClaimed(const FYClaimedContractBackendData& claimedContractBackendData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIfBoardsDataHasAlreadyBeenInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerContractsBoardsDataComponent* FindContractsBoardsDataComponentChecked(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerContractsBoardsDataComponent* FindContractsBoardsDataComponent(AActor* actorContext);
    
private:
    UFUNCTION(BlueprintCallable)
    void EnableContractInteractionAgain(const FString& callerUserId, bool isFail, bool anActiveContractHasBeenCancelled, FYContractStatusChangeInfo Info);
    
};

