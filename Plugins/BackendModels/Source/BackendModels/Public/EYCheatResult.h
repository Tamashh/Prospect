#pragma once
#include "CoreMinimal.h"
#include "EYCheatResult.generated.h"

UENUM(BlueprintType)
enum class EYCheatResult : uint8 {
    OK,
    NO_SUCH_USER,
    NO_SUCH_ITEM,
    ALREADY_REMOVED,
    NULL_CONTEXT,
    FAILED_REQ_DESERIALIZATION,
    FAILED_GET_USERDATA,
    WRONG_INPUT_DATA,
};

