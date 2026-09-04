#pragma once
#include "CoreMinimal.h"
#include "EYInteractionType.generated.h"

UENUM(BlueprintType)
enum class EYInteractionType : uint8 {
    None,
    ExtractionActivation,
    Extraction,
    PickUp,
    DBNO_Revive,
    DBNO_Execute,
    Trophy,
    LootCrate,
    StationSocial,
    MAX,
};

