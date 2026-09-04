#include "YExternalAnnouncementFunctions.h"

UYExternalAnnouncementFunctions::UYExternalAnnouncementFunctions() {
}

void UYExternalAnnouncementFunctions::QueueAnnouncementLocal(UObject* WorldContext, FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions) {
}

void UYExternalAnnouncementFunctions::PlayAnnouncementLocal(UObject* WorldContext, FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions) {
}

void UYExternalAnnouncementFunctions::PlayAnnouncementForSinglePlayer(APlayerController* PlayerController, FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions) {
}

void UYExternalAnnouncementFunctions::PlayAnnouncementForPlayerAndTeammates(AActor* playerContext, FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions, bool includePlayer) {
}

void UYExternalAnnouncementFunctions::PlayAnnouncementForAllPlayersInArea(UObject* WorldContext, FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions, const FVector& Location, float Radius) {
}

void UYExternalAnnouncementFunctions::PlayAnnouncementForAllPlayersExcept(UObject* WorldContext, FDataTableRowHandle rowHandle, TArray<APlayerController*> ignoredPlayerControllers, FYAnnouncementPlaybackOptions playbackOptions) {
}

void UYExternalAnnouncementFunctions::PlayAnnouncementForAllPlayers(UObject* WorldContext, FDataTableRowHandle rowHandle, FYAnnouncementPlaybackOptions playbackOptions) {
}


