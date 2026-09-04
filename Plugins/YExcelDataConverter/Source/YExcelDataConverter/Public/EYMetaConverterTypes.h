#pragma once
#include "CoreMinimal.h"
#include "EYMetaConverterTypes.generated.h"

UENUM(BlueprintType)
enum class EYMetaConverterTypes : uint8 {
    None,
    ItemToGame,
    Items,
    Upgrading,
    Crafting,
    Contracts,
    PlayerQuarters,
    UpgradeNodes,
    KMarkGeneratorRate,
    AurumGeneratorRate,
    StashIncrease,
    SafetyPockedIncrease,
    WorkbenchTimeReduction,
    DailyCrateUpgradeCosts,
    FortunaPassActions,
    FortunaPassSeasonLevels,
    All,
};

