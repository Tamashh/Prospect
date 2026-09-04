#pragma once
#include "CoreMinimal.h"
#include "EYAlienForgeBIType.generated.h"

UENUM(BlueprintType)
enum class EYAlienForgeBIType : uint8 {
    invalid,
    ingots,
    ingredients,
    lottery_ticket,
    MAX,
};

