#pragma once
#include "CoreMinimal.h"
#include "EYPlayfabLoginType.generated.h"

UENUM(BlueprintType)
enum class EYPlayfabLoginType : uint8 {
    Invalid,
    Custom,
    PlayfabAccount,
    AlreadyLoggedIn,
    EpicLogin,
    EosToken,
    EosDevTool,
    Steam,
    EosOAuth,
};

