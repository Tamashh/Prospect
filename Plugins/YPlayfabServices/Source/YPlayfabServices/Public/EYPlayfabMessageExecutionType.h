#pragma once
#include "CoreMinimal.h"
#include "EYPlayfabMessageExecutionType.generated.h"

UENUM(BlueprintType)
enum class EYPlayfabMessageExecutionType : uint8 {
    RequestToPlayfab,
    Response,
    Notify,
};

