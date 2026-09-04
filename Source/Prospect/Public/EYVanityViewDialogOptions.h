#pragma once
#include "CoreMinimal.h"
#include "EYVanityViewDialogOptions.generated.h"

UENUM(BlueprintType)
enum class EYVanityViewDialogOptions : uint8 {
    None,
    ConfirmChanges,
    SceneChange,
};

