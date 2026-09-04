#pragma once
#include "CoreMinimal.h"
#include "EYChannelContext.generated.h"

UENUM(BlueprintType)
enum class EYChannelContext : uint8 {
    None,
    Text,
    Voice,
    All = 4,
};

