#pragma once
#include "CoreMinimal.h"
#include "EHorizonTweenRotatorConstraints.generated.h"

UENUM(BlueprintType)
namespace EHorizonTweenRotatorConstraints {
    enum Type {
        None,
        RollOnly,
        PitchOnly,
        YawOnly,
        RollAndPitchOnly,
        PitchAndYawOnly,
        RollAndYawOnly,
    };
}

