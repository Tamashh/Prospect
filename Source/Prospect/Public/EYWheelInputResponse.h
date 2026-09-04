#pragma once
#include "CoreMinimal.h"
#include "EYWheelInputResponse.generated.h"

UENUM(BlueprintType)
enum EYWheelInputResponse {
    Denied,
    Accepted,
    TabAction,
};

