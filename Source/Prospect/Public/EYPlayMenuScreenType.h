#pragma once
#include "CoreMinimal.h"
#include "EYPlayMenuScreenType.generated.h"

UENUM(BlueprintType)
enum class EYPlayMenuScreenType : uint8 {
    None,
    MapSelection,
    LoadoutSelection,
    Insurance,
    Deploy,
    MAX,
};
