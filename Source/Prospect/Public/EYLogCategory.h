#pragma once
#include "CoreMinimal.h"
#include "EYLogCategory.generated.h"

UENUM(BlueprintType)
enum class EYLogCategory : uint8 {
    None,
    LogYAI,
    LogYAbilities,
    LogYActivities,
    LogYAnalytics,
    LogYAudio,
    LogYAutomation,
    LogYContracts,
    LogYCrafting,
    LogYCustomization,
    LogYFactions,
    LogYFortunaPass,
    LogYGenerators,
    LogYInitialization,
    LogYInterruptionManager,
    LogYInventory,
    LogYMatch,
    LogYMission,
    LogYNotifications,
    LogYPlayer,
    LogYTechTree,
    LogYUI,
    LogYVehicle,
};

