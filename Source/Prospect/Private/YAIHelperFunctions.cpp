#include "YAIHelperFunctions.h"

UYAIHelperFunctions::UYAIHelperFunctions() {
}

void UYAIHelperFunctions::UnregisterActorFromAIPerceptionSystem(AActor* Actor) {
}

bool UYAIHelperFunctions::IsAIControlled(AActor* Actor) {
    return false;
}

AYAIController* UYAIHelperFunctions::GetYAIController(AActor* Actor) {
    return NULL;
}

AYAICharacter* UYAIHelperFunctions::GetYAICharacter(AActor* Actor) {
    return NULL;
}

bool UYAIHelperFunctions::FindAITuningRowFromActor(AActor* Actor, FYAITuningRow& tuningRow, const FString& Context) {
    return false;
}

void UYAIHelperFunctions::FindAIAudioDataFromActor(AActor* Actor, FYAIAudio& audioData) {
}
