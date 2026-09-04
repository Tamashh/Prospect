#pragma once
#include "CoreMinimal.h"
#include "EYAggroUpdateState.generated.h"

UENUM(BlueprintType)
enum class EYAggroUpdateState : uint8 {
    None,
    DataPrepared,
    InitialAggroCalculated,
    TargetAggroMapSorted,
    WeightedAggroCalculated,
    CharacterAggroDataPrepared,
    UpdateFinished,
};

