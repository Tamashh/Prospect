#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YAICharacterDefinition.h"
#include "YAISquadDefinitionSpawnOption.h"
#include "YAISpawnHelperFunctions.generated.h"

UCLASS(Blueprintable)
class UYAISpawnHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAISpawnHelperFunctions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool RollOnAISquadSpawnRow(UObject* WorldContext, FDataTableRowHandle rowHandle, FYAISquadDefinitionSpawnOption& Info, FString& outError, FString& outSquadTypeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static float FindHighestResetDistance(UObject* WorldContext, const TArray<FYAICharacterDefinition>& ais);
    
};

