#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "OnGenericEventDelegateFinishedDelegate.h"
#include "YInventoryItem.h"
#include "YMissionDataTableRow.h"
#include "YMissionRuntimeData.h"
#include "YOnboardingBlockedFeaturesDataTableRow.h"
#include "YMissionExternalFunctions.generated.h"

class AActor;
class UYControllerBackendMissionComponent;
class UYOnboardingPlayerDataComponent;
class UYOnboardingPlayerInstanceComponent;

UCLASS(Blueprintable)
class UYMissionExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYMissionExternalFunctions();

    UFUNCTION(BlueprintCallable)
    static void RequestSetActiveOnboardingMission(UObject* objectContext, const FDataTableRowHandle& missionRow, const int32 progress);

    UFUNCTION(BlueprintCallable)
    static bool IsOnOnboardingByMissionRowAndStepIndex(AActor* actorContext, const FDataTableRowHandle& missionRow, int32 stepIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFeatureUnlockedDueToOnboarding(AActor* actorContext, FName sceneId, FDataTableRowHandle& sceneToShow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPlayerActiveStepUiData(AActor* actorContext, FYMissionRuntimeData& uiMissionLineStepInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPlayerActiveMissionRowHandles(AActor* actorContext, TArray<FYMissionDataTableRow>& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPlayerActiveMissionInstance(AActor* actorContext, TArray<UYOnboardingPlayerInstanceComponent*>& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetPlayerActiveMissionBaseRowHandles(AActor* actorContext, TArray<FDataTableRowHandle>& outData);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentOnboardingStepData(AActor* actorContext, FYMissionRuntimeData& outStepData);

    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetCurrentOnboardingStepCustomRules(AActor* actorContext);

    UFUNCTION(BlueprintCallable)
    static bool GetBlockedFeatureDataTableRowByScene(AActor* actorContext, FName sceneId, FYOnboardingBlockedFeaturesDataTableRow& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYOnboardingPlayerDataComponent* FindMissionComponent(AActor* relevantActor, const FString& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerBackendMissionComponent* FindBackendComponent(AActor* relevantActor, const FString& Context);
    
    UFUNCTION(BlueprintCallable)
    static void CreateMissionProgressStep(UYOnboardingPlayerInstanceComponent* instanceComponent, int32 stepIndex, FOnGenericEventDelegateFinished finishedStepBinding, bool autoStart);
    
    UFUNCTION(BlueprintCallable)
    static bool ConstructQuestsDataTableRowFromQuestId(UObject* objectContext, FName ID, FDataTableRowHandle& outRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CalculateRewardsFromOnboardingMission(FYMissionDataTableRow& missionRow, TArray<FYInventoryItem>& rewards);
    
};

