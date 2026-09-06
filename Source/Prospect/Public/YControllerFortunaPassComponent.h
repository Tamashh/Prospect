#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "YCompletedActions.h"
#include "YFortunaPassPlayerData.h"
#include "YOnFortunaPassLevelUpSignatureDelegate.h"
#include "YOnFortunaPassPlayerDataUpdatedSignatureDelegate.h"
#include "YOnResetActionsCapBackendValidationReceivedSignatureDelegate.h"
#include "YOnUpdatedActionsBackendValidationReceivedSignatureDelegate.h"
#include "YProgressChange.h"
#include "YSeasonProgressionUpdateData.h"
#include "YControllerFortunaPassComponent.generated.h"

class AActor;
class UYControllerFortunaPassComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerFortunaPassComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFortunaPassPlayerDataUpdatedSignature OnFortunaPassPlayerDataInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFortunaPassPlayerDataUpdatedSignature OnFortunaPassPlayerCurrentDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnUpdatedActionsBackendValidationReceivedSignature OnUpdatedActionsBackendValidationReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnResetActionsCapBackendValidationReceivedSignature OnResetActionsCapBackendValidationReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFortunaPassLevelUpSignature OnFortunaPassLevelUp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FortunaPassPlayerDataBackend, meta=(AllowPrivateAccess=true))
    FYFortunaPassPlayerData m_fortunaPassPlayerDataBackend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FortunaPassPlayerDataCurrent, meta=(AllowPrivateAccess=true))
    FYFortunaPassPlayerData m_fortunaPassPlayerDataCurrent;
    
public:
    UYControllerFortunaPassComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UpdateFortunaPassModelSeasonXp(const int32 updatedSeasonXp) const;
    
    UFUNCTION(BlueprintCallable)
    void UpdatedActionsBackendValidationReceived(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    void TrySendFortunaPassDataToBackend();
    
    UFUNCTION(BlueprintCallable)
    void TrackerProgressUpdate(const TArray<FYProgressChange>& actionsProgressIncrease);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestFortunaPassDataFromBackend();
    
    UFUNCTION(BlueprintCallable)
    void ResetActionsCapBackendValidationReceived(const FString& UserId);
    
public:
    UFUNCTION(BlueprintCallable)
    static void RequestFortunaPassDataFromBackend(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static void RequestBackendToResetActionsDailyCapFromPlayer(AActor* actorContext);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSeasonProgressionUpdateReceived(const FYSeasonProgressionUpdateData& seasonProgressionData);
    
    UFUNCTION(BlueprintCallable)
    void OnSeasonProgressionUpdated(const int32 updatedSeasonXp, const FYCompletedActions& updatedCompletedActions);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FortunaPassPlayerDataCurrent() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FortunaPassPlayerDataBackend() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerPremiumXpBoost() const;
    
private:
    UFUNCTION(BlueprintCallable)
    static bool GetIfOneDayPassedSinceLastReset(const FDateTime& UtcNow, const FYFortunaPassPlayerData& passPlayerData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetCurrentSeasonRemainingDailyCapTimeUtc() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYFortunaPassPlayerData GetCurrentData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerFortunaPassComponent* FindFortunaPassComponentChecked(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerFortunaPassComponent* FindFortunaPassComponent(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ComputeProgressedAndNewData(FYFortunaPassPlayerData& updatedData) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CacheInitDataReceivedFromBackend(const FString& UserId, const FYFortunaPassPlayerData& initFortunaPassPlayerData);
    
};

