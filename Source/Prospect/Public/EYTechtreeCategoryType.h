#pragma once
#include "CoreMinimal.h"
#include "EYTechtreeCategoryType.generated.h"

UENUM(BlueprintType)
enum class EYTechtreeCategoryType : uint8 {
    None,
    Korolev,
    Osiris,
    ICA,
    Crafting,
    Mining,
    Inventory,
    Generators,
    Workbench,
    MAX,
};

