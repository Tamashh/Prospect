#pragma once
#include "CoreMinimal.h"
#include "EYEnemyType.generated.h"

UENUM(BlueprintType)
enum class EYEnemyType : uint8 {
    None,
    DebugAutomationTest,
    DirtBeast_Melee,
    DirtBeast_RangedShort,
    DirtBeast_RangedMedium,
    DirtBeast_RangedLong,
    DirtBeast_MeleeHeavy,
    DirtBeast_RangedHeavy,
    DirtBeast_FlyingHeavy,
    DirtBeast_Boss,
    Orobot_Melee,
    Orobot_RangedShort,
    Orobot_RangedMedium,
    Orobot_Walker,
    Orobot_Platform,
    Plunderbot_RangedShort,
    Plunderbot_RangedMedium,
    Plunderbot_RangedLong,
    GlowBeetle_Blast,
    GlowBeetle_Acid,
    GlowBeetle_Summon,
    Strider,
    Rattler,
    Weremole,
    Crusher,
    Howler,
};

