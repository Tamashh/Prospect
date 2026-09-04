#pragma once
#include "CoreMinimal.h"
#include "EYPlayfabMessageRequestResponse.generated.h"

UENUM(BlueprintType)
enum class EYPlayfabMessageRequestResponse : uint8 {
    Invalid,
    NotLoggedIn,
    Pending,
    Ok,
};

