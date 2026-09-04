#pragma once
#include "CoreMinimal.h"
#include "EYHUDInfoPriorityCategory.generated.h"

UENUM(BlueprintType)
enum class EYHUDInfoPriorityCategory : uint8 {
    None,
    EvacInteraction,
    Interaction,
    AreaAnnouncement,
    MAX,
};

