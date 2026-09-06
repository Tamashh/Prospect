#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnMissionInitializationReceivedDelegate.h"
#include "OnMissionCompletedDelegate.h"
#include "OnMissionLineStepCompletedDelegate.h"
#include "OnMissionLineStepCreatedDelegate.h"
#include "OnRewardsReceivedFromMetaQuestDelegate.h"
#include "YMissionDataTableRow.h"
#include "YMissionReplicatedStateData.h"
#include "YMissionRuntimeData.h"
#include "YMissionRuntimeInitializationData.h"
#include "YMissionVOData.h"
#include "YOnboardingPlayerDataComponent.generated.h"

class UYOnboardingPlayerInstanceComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYOnboardingPlayerDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UYOnboardingPlayerInstanceComponent* m_activeOnboardingInstance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionLineStepCreated OnMissionLineStepCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionLineStepCompleted OnMissionLineStepCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionCompleted OnMissionCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRewardsReceivedFromMetaQuest OnRewardsReceivedFromMetaQuest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionInitializationReceived OnMissionInitializationReceived;

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMissionRuntimeData m_onboardingArcRuntimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FYMissionVOData> m_pendingVOData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FYMissionVOData> m_playedVOData;

public:
    UYOnboardingPlayerDataComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnSceneClosed(const FDataTableRowHandle closedSceneHandle);

    UFUNCTION(BlueprintCallable)
    void OnOnboardingStateUpdated(const FYMissionReplicatedStateData& missionReplicatedStateData);
    
    UFUNCTION(BlueprintCallable)
    void OnAllRewardsWidgetsClosed();

public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyMissionActiveAfterInitialization() const;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void InitializationMissionInstanceComponent(const FDataTableRowHandle& rowHandle, const FYMissionRuntimeInitializationData& runtimeData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReceivedInitializationFromBackend() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYMissionRuntimeData GetMissionRuntimeData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMissionRow(const FString& callerContext, FYMissionDataTableRow& rowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetCompletedMissionsIds() const;

};

