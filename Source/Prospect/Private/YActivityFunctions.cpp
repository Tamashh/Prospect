#include "YActivityFunctions.h"

UYActivityFunctions::UYActivityFunctions() {
}

void UYActivityFunctions::Sort(TArray<FYActivityCountEntry>& arrayToSort) {
}

void UYActivityFunctions::SendActivityAnalyticsEvent(AActor* Actor, EYActivityType Type, bool isSpawning, const FString& activitySubType) {
}

void UYActivityFunctions::RenameActor(AActor* Actor, const FString& Name) {
}

bool UYActivityFunctions::IsInsideActivityArea(AActor* actorContext, FString& outAreaName) {
    return false;
}

bool UYActivityFunctions::IsActorSpawnedByArea(AActor* Actor) {
    return false;
}

bool UYActivityFunctions::IsActorReplicatingMovement(AActor* Actor) {
    return false;
}

FString UYActivityFunctions::GetStringFromActivityType(const EYActivityType& activityType) {
    return TEXT("");
}

FString UYActivityFunctions::GetLevelName(AActor* Actor) {
    return TEXT("");
}

ULevel* UYActivityFunctions::GetLevel(AActor* Actor) {
    return NULL;
}

float UYActivityFunctions::GetDebugActivitySpawnDistanceMultiplier() {
    return 0.0f;
}

float UYActivityFunctions::GetClosestPlayerDistanceToActor(AActor* Actor) {
    return 0.0f;
}

TArray<EYActivityType> UYActivityFunctions::GetAllMineralActivities() {
    return TArray<EYActivityType>();
}

EYActivityType UYActivityFunctions::GetActivityTypeFromString(const FString& inString) {
    return EYActivityType::None;
}

FYActivityDataTableRow UYActivityFunctions::GetActivityTuning(UObject* WorldContextObject, EYActivityType activityType) {
    return FYActivityDataTableRow{};
}


