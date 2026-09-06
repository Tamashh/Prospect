#include "YAISpawnHelperFunctions.h"

UYAISpawnHelperFunctions::UYAISpawnHelperFunctions() {
}

bool UYAISpawnHelperFunctions::RollOnAISquadSpawnRow(UObject* WorldContext, FDataTableRowHandle rowHandle, FYAISquadDefinitionSpawnOption& Info, FString& outError, FString& outSquadTypeName) {
    return false;
}

float UYAISpawnHelperFunctions::FindHighestResetDistance(UObject* WorldContext, const TArray<FYAICharacterDefinition>& ais) {
    return 0.0f;
}


