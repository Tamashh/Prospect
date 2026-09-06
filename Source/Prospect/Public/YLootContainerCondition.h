#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YLootContainerCondition.generated.h"

USTRUCT(BlueprintType)
struct FYLootContainerCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_anyLootContainer;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_LootContainerDefinitions;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_mapName;

    PROSPECT_API FYLootContainerCondition();
};
