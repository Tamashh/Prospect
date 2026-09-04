#pragma once
#include "CoreMinimal.h"
#include "EYInputUIStackType.generated.h"

UENUM(BlueprintType)
enum class EYInputUIStackType : uint8 {
    Invalid,
    None,
    Scene,
    GearStore,
    SocialInteraction,
    InputWidget,
    Chat,
};

