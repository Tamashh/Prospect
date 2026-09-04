#pragma once
#include "CoreMinimal.h"
#include "EYVanityType.generated.h"

UENUM(BlueprintType)
enum class EYVanityType : uint8 {
    None,
    Weapon,
    Character,
    Melee,
    Banner,
    DeathEmote,
    NormalEmote,
    Vehicle,
    Droppod,
    SocialProfile,
    Spray,
    WeaponCharm,
    Pet,
    MaterialVariation,
    ArcheType,
    MAX,
};

