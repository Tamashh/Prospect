#pragma once
#include "CoreMinimal.h"
#include "EYSocialRequestResult.generated.h"

UENUM(BlueprintType)
enum class EYSocialRequestResult : uint8 {
    OK,
    GUID_PARSING_FAILED,
    GOT_NO_SOCIAL_PROFILES,
    UNKNOWN_ERROR,
};

