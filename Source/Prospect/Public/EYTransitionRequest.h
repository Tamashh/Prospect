#pragma once
#include "CoreMinimal.h"
#include "EYTransitionRequest.generated.h"

UENUM(BlueprintType)
enum class EYTransitionRequest : uint8 {
    None,
    Reset,
    FindCamera,
    ExplicitViewTarget,
};

