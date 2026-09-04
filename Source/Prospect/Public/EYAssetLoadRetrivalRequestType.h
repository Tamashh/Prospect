#pragma once
#include "CoreMinimal.h"
#include "EYAssetLoadRetrivalRequestType.generated.h"

UENUM(BlueprintType)
enum class EYAssetLoadRetrivalRequestType : uint8 {
    OnlyFirstPerson,
    OnlyThirdPerson,
    All,
};

