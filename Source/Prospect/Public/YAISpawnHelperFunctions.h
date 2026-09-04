#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EYEnemyType.h"
#include "YAINavMeshInfo.h"
#include "YAISpawnArchetypeData.h"
#include "YAISquadDefinition.h"
#include "YSquadAIType.h"
#include "YAISpawnHelperFunctions.generated.h"

class AActor;
class ANavigationData;

UCLASS(Blueprintable)
class UYAISpawnHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAISpawnHelperFunctions();

    UFUNCTION(BlueprintCallable)
    static bool RollOnAISquadSpawnRow(UObject* Context, FDataTableRowHandle rowHandle, FYAISquadDefinition& Info, FString& outError, FString& outSquadTypeName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsEnemyTypeNavMeshSupported(UObject* WorldContextObject, EYEnemyType enemyType, const FYAINavMeshInfo& navMeshInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ANavigationData* GetNavDataForAIActor(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FYAISpawnArchetypeData FindSpawnArchetypeData(UObject* WorldContextObject, EYEnemyType enemyType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static float FindHighestResetDistance(UObject* WorldContext, const TArray<FYSquadAIType>& squadAiTypes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DetermineSupportedEnemyTypesByNavMeshAt(UObject* WorldContextObject, FVector locationContext, FVector searchExtent, FYAINavMeshInfo& outNavMeshInfo);
    
};

