#include "YGameModeBase.h"
#include "YServerMatchmakingUpdateComponent.h"

AYGameModeBase::AYGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_enableReplicationGraph = false;
    this->m_serverMatchmakingUpdateComponent = CreateDefaultSubobject<UYServerMatchmakingUpdateComponent>(TEXT("YAllowMatchJoinComponent"));
}

void AYGameModeBase::OnPlayerStateSpawned(APlayerState* State) {
}

void AYGameModeBase::OnCompletedSessionState(EYSessionEventType newState) {
}

void AYGameModeBase::DefaultTimer() {
}


