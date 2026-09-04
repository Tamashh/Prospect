#include "YProspectAIExternalFunctions.h"

UYProspectAIExternalFunctions::UYProspectAIExternalFunctions() {
}

void UYProspectAIExternalFunctions::UnregisterActorFromAIPerceptionSystem(AActor* Actor) {
}

FString UYProspectAIExternalFunctions::ToBugItGoString(const FVector& vectorContext) {
    return TEXT("");
}

bool UYProspectAIExternalFunctions::IsAIControlled(AActor* Actor) {
    return false;
}

AYAIController* UYProspectAIExternalFunctions::GetYAIController(AActor* contextAxtor) {
    return NULL;
}

AYAICharacter* UYProspectAIExternalFunctions::GetYAICharacter(AActor* contextAxtor) {
    return NULL;
}

FString UYProspectAIExternalFunctions::GetBlackboardState(AAIController* AIController) {
    return TEXT("");
}

FString UYProspectAIExternalFunctions::GetBehaviorInfoString(AAIController* AIController) {
    return TEXT("");
}

FString UYProspectAIExternalFunctions::GetActiveTreesInfo(AAIController* AIController) {
    return TEXT("");
}

FString UYProspectAIExternalFunctions::GetActiveTaskInfo(AAIController* AIController) {
    return TEXT("");
}

bool UYProspectAIExternalFunctions::FindAITuningRowFromActor(AActor* Actor, FYAITuningRow& tuningRow, const FString& Context) {
    return false;
}

void UYProspectAIExternalFunctions::FindAIAudioDataFromActor(AActor* aiContextActor, FYAIAudio& audioData) {
}

bool UYProspectAIExternalFunctions::ChangeAggroOnPersistentAIData(UYPersistentDataAISquad* persistentSquadData, AActor* TargetActor, float aggroToAdd, const FString& contextString) {
    return false;
}


