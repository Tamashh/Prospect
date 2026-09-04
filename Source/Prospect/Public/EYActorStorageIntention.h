#pragma once
#include "CoreMinimal.h"
#include "EYActorStorageIntention.generated.h"

UENUM(BlueprintType)
enum class EYActorStorageIntention : uint8 {
    None,
    Store,
    Remove,
};

