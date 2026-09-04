#include "YGameSession_Match.h"

AYGameSession_Match::AYGameSession_Match(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AYGameSession_Match::OnRoomSquadsUpdated(const TArray<FYRoomSquad>& squads) const {
}

void AYGameSession_Match::OnRoomPlayersUpdated(const TArray<FYRoomPlayer>& Players) {
}

void AYGameSession_Match::OnInitializeRoomPlayers(const TArray<FYRoomPlayer>& Players) const {
}

void AYGameSession_Match::OnInitializePlayerInternal(const TArray<FString>& userIds) const {
}


