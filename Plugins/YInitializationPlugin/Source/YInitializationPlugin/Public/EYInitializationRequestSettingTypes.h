#pragma once
#include "CoreMinimal.h"
#include "EYInitializationRequestSettingTypes.generated.h"

UENUM(BlueprintType)
enum class EYInitializationRequestSettingTypes : uint8 {
    Invalid,
    AllComplete,
    IgnoreCharacterCustomization,
};

