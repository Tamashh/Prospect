#pragma once
#include "CoreMinimal.h"
#include "YSpawnTypeInfo.h"
#include "YAISquadDefinition.generated.h"

USTRUCT(BlueprintType)
struct FYAISquadDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spawnWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYSpawnTypeInfo> m_ais;
    
    PROSPECT_API FYAISquadDefinition();
};

