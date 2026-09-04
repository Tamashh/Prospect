#pragma once
#include "CoreMinimal.h"
#include "EYInboxMessageType.generated.h"

UENUM(BlueprintType)
enum class EYInboxMessageType : uint8 {
    None,
    FoundersPack,
    Progression,
    MAX,
};

