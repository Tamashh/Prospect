#pragma once
#include "CoreMinimal.h"
#include "EYQuickActionClick.generated.h"

UENUM(BlueprintType)
enum class EYQuickActionClick : uint8 {
    None,
    MuteChat,
    MuteVoice,
    ReportPlayer,
    AddFriend,
    BlockPlayer,
};

