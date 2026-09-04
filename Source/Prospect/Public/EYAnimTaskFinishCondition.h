#pragma once
#include "CoreMinimal.h"
#include "EYAnimTaskFinishCondition.generated.h"

UENUM(BlueprintType)
enum class EYAnimTaskFinishCondition : uint8 {
    MontageEnds,
    MontageBlendsOut,
    TimeBeforeMontageEnds,
    BlackboardBoolValueChanged,
};

