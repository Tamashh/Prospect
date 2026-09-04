#pragma once
#include "CoreMinimal.h"
#include "EYAccountLinkingResultCode.generated.h"

UENUM(BlueprintType)
enum class EYAccountLinkingResultCode : uint8 {
    Success,
    Failure_InvalidTargetPlatform,
    Failure_WontLoginToCurrentPlatform,
    Failure_NoPlayFabAccountExists,
    Failure_TooManyPlayFabAccountsExist,
    Failure_PlatformAccountAlreadyLinked,
    Failure_CouldNotMergeAccountData,
    Failure_Internal,
    Failure_Azure,
    Failure_PlayFab,
    Failure_Timeout,
    Failure_Unknown,
};

