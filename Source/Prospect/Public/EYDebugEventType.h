#pragma once
#include "CoreMinimal.h"
#include "EYDebugEventType.generated.h"

UENUM(BlueprintType)
enum class EYDebugEventType : uint8 {
    AudioMixModifiers,
    Announcements,
    InputMode,
    PlayerInitialization,
};

