#pragma once
#include "CoreMinimal.h"
#include "EYDebugServerRetrievalType.generated.h"

UENUM(BlueprintType)
enum class EYDebugServerRetrievalType : uint8 {
    None,
    Initialization,
};

