#pragma once
#include "CoreMinimal.h"
#include "EYFortunaPassToastReponseType.generated.h"

UENUM(BlueprintType)
enum class EYFortunaPassToastReponseType : uint8 {
    UnknownError,
    ServerError,
    StashFull,
    Ok,
};

