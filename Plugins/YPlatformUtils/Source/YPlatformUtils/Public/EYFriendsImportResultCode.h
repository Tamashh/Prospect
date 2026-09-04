#pragma once
#include "CoreMinimal.h"
#include "EYFriendsImportResultCode.generated.h"

UENUM(BlueprintType)
enum class EYFriendsImportResultCode : uint8 {
    Success,
    Failure_NoUsersToImport,
    Failure_UnsupportedPlatform,
    Failure_FriendsLimitReached,
    Failure_FriendsLimitReachedAndDeleted,
    Failure_Internal,
    Failure_Azure,
    Failure_PlayFab,
    Failure_Unknown,
    Failure_InvalidRequest,
    Failure_EgsRequest,
};

