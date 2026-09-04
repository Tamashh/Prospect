#pragma once
#include "CoreMinimal.h"
#include "EYCraftingUnavailableReason.generated.h"

UENUM(BlueprintType)
enum class EYCraftingUnavailableReason : uint8 {
    None,
    ItemOwned,
    NotEnoughFunds,
    FactionLevelNotReached,
    MissionNotConcluded,
    RequirredItemNotOwned,
    Unknown,
    MAX,
};

