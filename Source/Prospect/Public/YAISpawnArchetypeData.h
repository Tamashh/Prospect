#pragma once
#include "CoreMinimal.h"
#include "EYNavMeshType.h"
#include "YAISpawnArchetypeData.generated.h"

USTRUCT(BlueprintType)
struct FYAISpawnArchetypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYNavMeshType m_spawnNavMesh;
    
    PROSPECT_API FYAISpawnArchetypeData();
};

