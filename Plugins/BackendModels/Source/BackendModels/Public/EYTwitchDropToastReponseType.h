#pragma once
#include "CoreMinimal.h"
#include "EYTwitchDropToastReponseType.generated.h"

UENUM(BlueprintType)
enum class EYTwitchDropToastReponseType : uint8 {
    UnknownError,
    ServerError,
    StashFull,
    InvalidItemId,
    Ok,
};

