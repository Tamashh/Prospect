#pragma once
#include "CoreMinimal.h"
#include "EYContainerType.generated.h"

UENUM(BlueprintType)
enum class EYContainerType : uint8 {
    CustomItem,
    StandardItem,
    Offer,
};

