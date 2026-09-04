#pragma once
#include "CoreMinimal.h"
#include "EYGrantType.generated.h"

UENUM(BlueprintType)
enum class EYGrantType : uint8 {
    None,
    Blueprint,
    CustomItem,
    Modification,
    Vanity,
    HardCurrency,
    SoftCurrency,
    CraftingMaterial,
    SeasonXP,
    SeasonLevel,
    SeasonPass,
    LoreItem,
    ProspectorLevelXP,
    InsuranceCurrency,
    MAX,
};

