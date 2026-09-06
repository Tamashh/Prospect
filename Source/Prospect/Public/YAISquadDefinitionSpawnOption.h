#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YAISquadDefinitionSpawnOption.generated.h"

USTRUCT(BlueprintType)
struct FYAISquadDefinitionSpawnOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_spawnWeight;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_squadRowHandle;

    PROSPECT_API FYAISquadDefinitionSpawnOption();
};

