#pragma once
#include "CoreMinimal.h"
#include "EYNPCType.generated.h"

UENUM(BlueprintType)
enum class EYNPCType : uint8 {
    Environment,
    Loadout,
    Shop,
    Appearence,
    FortunaPass,
    Play,
    ICA,
    Korolev,
    Osiris,
    Badum,
};

