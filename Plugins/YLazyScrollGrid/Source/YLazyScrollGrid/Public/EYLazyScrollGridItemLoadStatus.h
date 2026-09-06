#pragma once
#include "CoreMinimal.h"
#include "EYLazyScrollGridItemLoadStatus.generated.h"

UENUM(BlueprintType)
enum EYLazyScrollGridItemLoadStatus {
    NotLoaded,
    PendingLoad,
    Loaded,
};
