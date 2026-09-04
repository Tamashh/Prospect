#include "YAISpawnHelperFunctions.h"

UYAISpawnHelperFunctions::UYAISpawnHelperFunctions() {
}

bool UYAISpawnHelperFunctions::RollOnAISquadSpawnRow(UObject* Context, FDataTableRowHandle rowHandle, FYAISquadDefinition& Info, FString& outError, FString& outSquadTypeName) {
    return false;
}

bool UYAISpawnHelperFunctions::IsEnemyTypeNavMeshSupported(UObject* WorldContextObject, EYEnemyType enemyType, const FYAINavMeshInfo& navMeshInfo) {
    return false;
}

ANavigationData* UYAISpawnHelperFunctions::GetNavDataForAIActor(UObject* WorldContextObject, AActor* Actor) {
    return NULL;
}

FYAISpawnArchetypeData UYAISpawnHelperFunctions::FindSpawnArchetypeData(UObject* WorldContextObject, EYEnemyType enemyType) {
    return FYAISpawnArchetypeData{};
}

float UYAISpawnHelperFunctions::FindHighestResetDistance(UObject* WorldContext, const TArray<FYSquadAIType>& squadAiTypes) {
    return 0.0f;
}

void UYAISpawnHelperFunctions::DetermineSupportedEnemyTypesByNavMeshAt(UObject* WorldContextObject, FVector locationContext, FVector searchExtent, FYAINavMeshInfo& outNavMeshInfo) {
}


