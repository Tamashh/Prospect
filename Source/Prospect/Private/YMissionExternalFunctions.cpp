#include "YMissionExternalFunctions.h"

UYMissionExternalFunctions::UYMissionExternalFunctions() {
}

bool UYMissionExternalFunctions::IsOnOnboardingByMissionRowAndStepIndex(AActor* actorContext, const FDataTableRowHandle& missionRow, int32 stepIndex) {
    return false;
}

bool UYMissionExternalFunctions::IsFeatureUnlockedDueToOnboarding(AActor* actorContext, FName sceneId, FDataTableRowHandle& sceneToShow) {
    return false;
}

void UYMissionExternalFunctions::GetPlayerActiveStepUiData(AActor* actorContext, FYMissionRuntimeData& uiMissionLineStepInfo) {
}

bool UYMissionExternalFunctions::GetPlayerActiveMissionRowHandles(AActor* actorContext, TArray<FYMissionDataTableRow>& outData) {
    return false;
}

bool UYMissionExternalFunctions::GetPlayerActiveMissionInstance(AActor* actorContext, TArray<UYOnboardingPlayerInstanceComponent*>& outData) {
    return false;
}

bool UYMissionExternalFunctions::GetPlayerActiveMissionBaseRowHandles(AActor* actorContext, TArray<FDataTableRowHandle>& outData) {
    return false;
}

bool UYMissionExternalFunctions::GetBlockedFeatureDataTableRowByScene(AActor* actorContext, FName sceneId, FYOnboardingBlockedFeaturesDataTableRow& Data) {
    return false;
}

UYOnboardingPlayerDataComponent* UYMissionExternalFunctions::FindMissionComponent(AActor* relevantActor, const FString& Context) {
    return NULL;
}

UYControllerBackendMissionComponent* UYMissionExternalFunctions::FindBackendComponent(AActor* relevantActor, const FString& Context) {
    return NULL;
}

void UYMissionExternalFunctions::CreateMissionProgressStep(UYOnboardingPlayerInstanceComponent* instanceComponent, int32 stepIndex, FOnGenericEventDelegateFinished finishedStepBinding, bool autoStart) {
}

bool UYMissionExternalFunctions::ConstructQuestsDataTableRowFromQuestId(UObject* objectContext, FName ID, FDataTableRowHandle& outRowHandle) {
    return false;
}

bool UYMissionExternalFunctions::CalculateRewardsFromOnboardingMission(FYMissionDataTableRow& missionRow, TArray<FYInventoryItem>& rewards) {
    return false;
}


