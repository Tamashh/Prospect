#pragma once
#include "CoreMinimal.h"
#include "EYPlayerInitializationType.generated.h"

UENUM(BlueprintType)
enum class EYPlayerInitializationType : uint8 {
    None,
    InventoryData,
    PlayerActorsInitialized,
    CharacterCustomizationInitialized,
    GlobalVanityLoaded,
    ServerInitialized,
    LevelsLoaded,
};

