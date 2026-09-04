#pragma once
#include "CoreMinimal.h"
#include "EYAnnouncementType.generated.h"

UENUM(BlueprintType)
enum class EYAnnouncementType : uint8 {
    Play2D,
    SpawnAtLocation,
    SpawnAttached,
};

