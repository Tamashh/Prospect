#pragma once
#include "CoreMinimal.h"
#include "EYServerCommand.generated.h"

UENUM(BlueprintType)
enum class EYServerCommand : uint8 {
    OK,
    SHUT_DOWN,
    TRAVEL_BACK,
};

