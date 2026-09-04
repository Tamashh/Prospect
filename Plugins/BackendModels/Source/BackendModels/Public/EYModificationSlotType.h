#pragma once
#include "CoreMinimal.h"
#include "EYModificationSlotType.generated.h"

UENUM(BlueprintType)
enum class EYModificationSlotType : uint8 {
    None,
    Optics,
    Magazine,
    Barrel,
    Muzzle,
    Stock,
    Ability,
    ForeGrip,
    Tactical,
    AmmoConverter,
    Receiver,
    Attachment,
    ScannerUpgrade1,
    ScannerUpgrade2,
    ScannerUpgrade3,
    ScannerUpgrade4,
    RearGrip,
    MAX,
};

