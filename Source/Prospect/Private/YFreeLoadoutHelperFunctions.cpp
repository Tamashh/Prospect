#include "YFreeLoadoutHelperFunctions.h"

UYFreeLoadoutHelperFunctions::UYFreeLoadoutHelperFunctions() {
}

bool UYFreeLoadoutHelperFunctions::TryActivateFreeLoadout(AActor* actorContext, bool IsActive) {
    return false;
}

float UYFreeLoadoutHelperFunctions::GetUnlockCooldownPercentCompleted(AActor* actorContext) {
    return 0.0f;
}

bool UYFreeLoadoutHelperFunctions::GetFreeLoadoutInfo(AActor* actorContext, FYFreeLoadout& freeLoadout) {
    return false;
}

bool UYFreeLoadoutHelperFunctions::GetCurrentFreeLoadoutWeight(AActor* actorContext, float& weight, int32& maxWeight, float& weightSafe, int32& maxWeightSafe) {
    return false;
}

bool UYFreeLoadoutHelperFunctions::GenerateFreeLoadoutDataFromSeed(AActor* actorContext, int32 randomSeed, FYFreeLoadoutData& freeLoadoutData, FDataTableRowHandle& associatedFactionRowHandle) {
    return false;
}

int32 UYFreeLoadoutHelperFunctions::DetermineMissingStashSlotsToActivateFreeLoadout(AActor* actorContext) {
    return 0;
}

bool UYFreeLoadoutHelperFunctions::CanActivateFreeLoadoutInStation(AActor* actorContext, FDateTime& freeLoadoutCooldownFinishedDateTime) {
    return false;
}

bool UYFreeLoadoutHelperFunctions::CanActivateFreeLoadout(AActor* actorContext) {
    return false;
}
