#pragma once
#include "CoreMinimal.h"
#include "EYRootZLayer.generated.h"

UENUM(BlueprintType)
enum class EYRootZLayer : uint8 {
    Screens,
    NavigationScreen,
    ServerUnavailableScreen,
    Escape,
    Dialogs,
};

