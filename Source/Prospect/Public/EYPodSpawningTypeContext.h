#pragma once
#include "CoreMinimal.h"
#include "EYPodSpawningTypeContext.generated.h"

UENUM(BlueprintType)
enum class EYPodSpawningTypeContext : uint8 {
    NoneAssigned,
    Customization,
    Lobby,
    Intro,
    InGame,
};

