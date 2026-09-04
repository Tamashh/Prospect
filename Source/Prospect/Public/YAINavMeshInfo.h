#pragma once
#include "CoreMinimal.h"
#include "EYEnemyType.h"
#include "YAINavMeshInfo.generated.h"

USTRUCT(BlueprintType)
struct FYAINavMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYEnemyType> m_supportedEnemyTypes;
    
    PROSPECT_API FYAINavMeshInfo();
};

