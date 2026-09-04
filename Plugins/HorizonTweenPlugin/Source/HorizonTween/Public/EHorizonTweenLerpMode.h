#pragma once
#include "CoreMinimal.h"
#include "EHorizonTweenLerpMode.generated.h"

UENUM(BlueprintType)
namespace EHorizonTweenLerpMode {
    enum Type {
        Lerp,
        LerpStable,
        InterpSinIn,
        InterpSinOut,
        InterpSinInOut,
        InterpExpoIn,
        InterpExpoOut,
        InterpExpoInOut,
        InterpCircularIn,
        InterpCircularOut,
        InterpCircularInOut,
        InterpEaseIn,
        InterpEaseOut,
        InterpEaseInOut,
        BounceIn,
        BounceOut,
        BounceInOut,
        ElasticIn,
        ElasticOut,
        ElasticInOut,
        BackIn,
        BackOut,
        BackInOut,
        QuadIn,
        QuadOut,
        QuadInOut,
        CubicIn,
        CubicOut,
        CubicInOut,
        QuartIn,
        QuartOut,
        QuartInOut,
        QuintIn,
        QuintOut,
        QuintInOut,
    };
}

