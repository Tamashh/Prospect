#pragma once
#include "CoreMinimal.h"
#include "EYAuthorizationState.generated.h"

UENUM(BlueprintType)
enum class EYAuthorizationState : uint8 {
    Init,
    LegalAgreementsNotAccepted,
    InvalidGamePlatform,
    NotLoggedIntoPlatform,
    LoggingIntoPlayFab,
    NotLoggedInToPlayFab,
    ServerNotLoggedInToPlayFab,
    DisconnectedFromBackendRetry,
    OnLoginCall,
    OnLoginRetry,
    NewLegalAgreementsCheck,
    NewLegalAgreementsNotAccepted,
    ClientUpdateCheck,
    ClientOutdated,
    MaintenanceModeCheck,
    MaintenanceModeRetry,
    AllowCommunicationWithBackend,
    AccountBanned,
    SeasonWipeCheck,
    SeasonWipeRetry,
    RollbackCheck,
    RollbackRetry,
    StationPingCheck,
    StationPingRetry,
    LoginQueueCheck,
    LoginQueueRetry,
    CompletelyAuthorized,
};

