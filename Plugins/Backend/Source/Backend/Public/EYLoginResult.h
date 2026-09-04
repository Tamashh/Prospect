#pragma once
#include "CoreMinimal.h"
#include "EYLoginResult.generated.h"

UENUM(BlueprintType)
enum class EYLoginResult : uint8 {
    OK,
    InvalidToken,
    AlreadyConnected,
    InvalidVersion,
    BadResponse,
    ServerUnavailable,
    SteamUnavailable,
    NotLoggedInToSteam,
    SteamAuthorizationFailed,
    EpicAuthorizationFailed,
    AuthorizationFailed,
    LegalAgreementsNotAccepted,
    AcceptingLegalAgreementsFailed,
    IsInLoginQueue,
};

