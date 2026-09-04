#pragma once
#include "CoreMinimal.h"
#include "EYClassRepNodeMapping.generated.h"

UENUM(BlueprintType)
enum class EYClassRepNodeMapping : uint8 {
    Undefined,
    NotRouted,
    RelevantAllConnections,
    PlayerCharacter,
    Spatialize_Static,
    Spatialize_Dynamic,
    Spatialize_Dormancy,
};

