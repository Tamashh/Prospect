#pragma once
#include "CoreMinimal.h"
#include "EHorizonTweenVectorConstraints.generated.h"

UENUM(BlueprintType)
namespace EHorizonTweenVectorConstraints {
    enum Type {
        None,
        XOnly,
        YOnly,
        ZOnly,
        XYPlane,
        YZPlane,
        XZPlane,
    };
}

