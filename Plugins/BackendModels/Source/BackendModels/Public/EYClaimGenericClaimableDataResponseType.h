#pragma once
#include "CoreMinimal.h"
#include "EYClaimGenericClaimableDataResponseType.generated.h"

UENUM(BlueprintType)
enum class EYClaimGenericClaimableDataResponseType : uint8 {
    UnknownError,
    ServerError,
    InvalidRequest,
    DataNotFound,
    StashFull,
    Ok,
};
