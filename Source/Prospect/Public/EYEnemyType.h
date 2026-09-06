#pragma once
#include "CoreMinimal.h"
#include "EYEnemyType.generated.h"

UENUM(BlueprintType)
enum class EYEnemyType : uint8 {
    None,
    DebugAutomationTest,
    GlowBeetle_Blast,
    GlowBeetle_Acid,
    Strider,
    Rattler,
    Weremole,
    Crusher,
    Howler,
};

