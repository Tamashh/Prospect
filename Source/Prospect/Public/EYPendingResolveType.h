#pragma once
#include "CoreMinimal.h"
#include "EYPendingResolveType.generated.h"

UENUM(BlueprintType)
enum class EYPendingResolveType : uint8 {
    None,
    Pending,
    Resolved,
};

