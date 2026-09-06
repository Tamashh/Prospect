#pragma once
#include "CoreMinimal.h"
#include "YAISquadDefinitionSpawnOption.h"
#include "YDataTableRowBase.h"
#include "YAISquadSpawnRow.generated.h"

USTRUCT(BlueprintType)
struct FYAISquadSpawnRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAISquadDefinitionSpawnOption> m_spawnOptions;
    
    PROSPECT_API FYAISquadSpawnRow();
};

