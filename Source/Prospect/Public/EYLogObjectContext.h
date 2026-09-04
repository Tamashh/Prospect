#pragma once
#include "CoreMinimal.h"
#include "EYLogObjectContext.generated.h"

UENUM(BlueprintType)
enum class EYLogObjectContext : uint8 {
    ClassName,
    ObjectName,
    FullName,
};

