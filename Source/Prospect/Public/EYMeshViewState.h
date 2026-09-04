#pragma once
#include "CoreMinimal.h"
#include "EYMeshViewState.generated.h"

UENUM(BlueprintType)
enum class EYMeshViewState : uint8 {
    NoneAssigned,
    FirstPerson,
    ThirdPerson,
};

