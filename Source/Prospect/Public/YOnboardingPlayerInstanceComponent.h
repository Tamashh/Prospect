#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYMissionResultType.h"
#include "OnMissionStateUpdatedDelegate.h"
#include "YMissionReplicatedStateData.h"
#include "YMissionRuntimeInitializationData.h"
#include "YMissionStepProgressEntry.h"
#include "YOnboardingPlayerInstanceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYOnboardingPlayerInstanceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionStateUpdated OnMissionStateUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYMissionRuntimeInitializationData m_runtimeInitializationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FYMissionStepProgressEntry> m_stepEntries;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionReplicatedStateData, meta=(AllowPrivateAccess=true))
    FYMissionReplicatedStateData m_missionReplicatedStateData;
    
public:
    UYOnboardingPlayerInstanceComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetCompletedMissionResult(EYMissionResultType missionResultType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionReplicatedStateData();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyMissionLineStepStarted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GoToStep(int32 step, bool bCallCompletionDelegateOfCurrentStep);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYMissionReplicatedStateData GetMissionReplicatedStateData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentMetaQuestStepHandle();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CompleteCurrentStep();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearHintIndicator();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartMetaQuest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MissionCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ClearHindIndicator();
    
};

