#pragma once
#include "CoreMinimal.h"
#include "EYFaction.generated.h"

UENUM(BlueprintType)
enum class EYFaction : uint8 {
    Invalid,
    ICA,
    Korolev,
    Osiris,
    Badum,
    MAX,
};

