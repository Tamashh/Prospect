#pragma once
#include "CoreMinimal.h"
#include "EYOnboardingQuestType.generated.h"

UENUM(BlueprintType)
enum class EYOnboardingQuestType : uint8 {
    None,
    TalkToNPC,
    Kill,
    GoTo,
    Buy,
    Craft,
    Scrap,
};

