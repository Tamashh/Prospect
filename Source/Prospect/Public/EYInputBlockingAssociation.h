#pragma once
#include "CoreMinimal.h"
#include "EYInputBlockingAssociation.generated.h"

UENUM(BlueprintType)
enum class EYInputBlockingAssociation : uint8 {
    Interaction,
    DBNO,
    Banner,
    Intro,
};

