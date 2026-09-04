#pragma once
#include "CoreMinimal.h"
#include "EYPlayerSetType.generated.h"

UENUM(BlueprintType)
enum class EYPlayerSetType : uint8 {
    None,
    WeaponOne,
    WeaponTwo,
    WeaponMax,
    Shield,
    BagItem,
    StashItem,
    SafeItem,
    CorpseContainer,
    Bag,
    Helmet,
    MeleeWeapon,
    MAX,
};

