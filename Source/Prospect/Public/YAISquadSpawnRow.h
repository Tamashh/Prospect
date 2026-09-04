#pragma once
#include "CoreMinimal.h"
#include "YAISquadDefinition.h"
#include "YDataTableRowBase.h"
#include "YAISquadSpawnRow.generated.h"

USTRUCT(BlueprintType)
struct FYAISquadSpawnRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAISquadDefinition> m_spawnOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAISquadDefinition> m_spawnOptionsStorm;
    
    PROSPECT_API FYAISquadSpawnRow();
};

