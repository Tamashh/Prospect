#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationMode.generated.h"

UENUM(BlueprintType)
enum class EYCustomizationMode : uint8 {
    None,
    Weapon,
    PlayerCharacter,
    CharacterExplicitVisualization,
    CharacterCustomizationPreview,
    NewCharacterExplicitVisualization,
    Emote,
    Banner,
    Vehicle,
    Droppod,
    Spray,
    Pet,
    Melee,
    Item,
    GenericItem,
    Bag,
    Consumable,
    Helmet,
    Shield,
    XpBoost,
    MAX,
};

