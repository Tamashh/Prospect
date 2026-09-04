#pragma once
#include "CoreMinimal.h"
#include "EYClaimContractRewardsStatus.h"
#include "YGetCompletedContractsResult.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYContractStatus.h"
#include "EYDeadDropDepositResult.h"
#include "EYPlayerMatchFinishedResult.h"
#include "OnDeadDropResultDelegate.h"
#include "YActiveContractInitData.h"
#include "YActiveContractsInitData.h"
#include "YActiveContractsUIData.h"
#include "YClaimedContractBackendData.h"
#include "YContractProgress.h"
#include "YContractsProgress.h"
#include "YOnActiveContractsProgressUpdatedSignatureDelegate.h"
#include "YOnCompletedContractDataUpdatedDelegate.h"
#include "YOnContractsStatusChangedSignatureDelegate.h"
#include "YControllerContractsActivesDataComponent.generated.h"

class AActor;
class AYPlayerController;
class UYCharacterLocationComponent;
class UYControllerContractsActivesDataComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerContractsActivesDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnContractsStatusChangedSignature OnContractsStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnActiveContractsProgressUpdatedSignature OnActiveContractsProgressUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCompletedContractDataUpdated OnCompletedContractDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeadDropResult BP_OnDeadDropResult;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveContractsUIData, meta=(AllowPrivateAccess=true))
    FYActiveContractsUIData m_activeContractsUIData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGetCompletedContractsResult m_completedContractData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FYContractsProgress m_contractsBackendProgressClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ContractsCurrentProgressClamp, meta=(AllowPrivateAccess=true))
    FYContractsProgress m_contractsCurrentProgressClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_delayForSendingBackendProgress;
    
public:
    UYControllerContractsActivesDataComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void TrySendMatchProgressToBackend();
    
public:
    UFUNCTION(BlueprintCallable)
    void TryConsumeDeadDropItems(AActor* deadDropActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void TrackerProgressUpdate(const FYContractsProgress& newData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupActiveContractsTutorial(TArray<FYActiveContractInitData> activeContracts);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTryConsumeDeadDropItems(AActor* deadDropActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestPlayerActiveContracts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RequestPlayerCompletedContracts(const FString& UserId) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ContractsCurrentProgressClamp(const FYContractsProgress& contractsCurrentProgressClamp) const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveContractsUIData(const FYActiveContractsUIData& activeContractsUIData) const;
    
    UFUNCTION(BlueprintCallable)
    void OnPreDestroy(AYPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerRemovedAllCompletedContracts(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerFinishedMatch(EYPlayerMatchFinishedResult newState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCompletedContractsDataReceived(const FString& UserId, const FYGetCompletedContractsResult& completedContracts);
    
    UFUNCTION(BlueprintCallable)
    void OnCheatCompleteContract(const FString& contractId);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterVisitedArea(UYCharacterLocationComponent* Component, FName Tag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContractActive(const FDataTableRowHandle& rowHandle) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasContractProgressedDuringMatch(const FString& contractId);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerContractClaimFail(const FString& UserId, const FString& contractId, const EYClaimContractRewardsStatus contractRewardsStatus);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerContractClaimed(const FYClaimedContractBackendData& claimedContractBackendData);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerContractCancelled(const FString& UserId, const FString& cancelledContractId);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerContractActivated(const FYActiveContractInitData& activeContractInitData);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerActiveContractsReceived(const FYActiveContractsInitData& activeContractsInit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsContractDataFullySetup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYGetCompletedContractsResult GetCompletedContractData() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYContractsProgress GetCachedBackendProgressClamped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYActiveContractsUIData GetCachedActiveContractsUIDataUnfiltered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYActiveContractsUIData GetCachedActiveContractsUIDataFiltered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYContractsProgress GetCachedActiveContractsProgressClamped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCachedActiveContractProgressClamped(const FString& contractId, FYContractProgress& activeContractCurrentProgressClamp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerContractsActivesDataComponent* FindContractsActivesDataCompChecked(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerContractsActivesDataComponent* FindContractsActivesDataComp(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYContractStatus DetermineContractStatus(FDataTableRowHandle rowHandle) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DebugSendContractProgressToBackend();
    
    UFUNCTION(BlueprintCallable)
    bool DebugMaxOutContractProgress(const FString& contractIdMaxOut, bool resetProgress);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientDeadDropDepositResult(EYDeadDropDepositResult Result);
    
private:
    UFUNCTION(BlueprintCallable)
    void ActivesStateUpdate(const FYActiveContractsUIData& newData);
    
};

