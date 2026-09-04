#pragma once
#include "CoreMinimal.h"
#include "EYVivoxAudioFadeModel.generated.h"

UENUM(BlueprintType)
enum class EYVivoxAudioFadeModel : uint8 {
    None,
    InverseByDistance,
    LinearByDistance,
    ExponentialByDistance,
};

