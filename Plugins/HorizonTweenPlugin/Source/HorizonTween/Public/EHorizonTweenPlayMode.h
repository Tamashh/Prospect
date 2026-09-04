#pragma once
#include "CoreMinimal.h"
#include "EHorizonTweenPlayMode.generated.h"

UENUM(BlueprintType)
namespace EHorizonTweenPlayMode {
    enum Type {
        Forward,
        Reverse,
        PingPong,
    };
}

