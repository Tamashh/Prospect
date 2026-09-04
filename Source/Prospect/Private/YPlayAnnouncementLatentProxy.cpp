#include "YPlayAnnouncementLatentProxy.h"

UYPlayAnnouncementLatentProxy::UYPlayAnnouncementLatentProxy() {
}

UYPlayAnnouncementLatentProxy* UYPlayAnnouncementLatentProxy::PlayAnnouncementLatent(AActor* playerContextActor, FDataTableRowHandle voRowHandle, FYAnnouncementPlaybackOptions Options) {
    return NULL;
}

void UYPlayAnnouncementLatentProxy::OnAnnouncementStopped(FYAnnouncementPlayEntryData voicelineData, bool cancelled) {
}

void UYPlayAnnouncementLatentProxy::OnAnnouncementStarted(FYVOAudioDatatableRow voicelineData, FYAnnouncementPlaybackOptions playbackOptions, const FYVOLine& voiceLine) {
}

FDataTableRowHandle UYPlayAnnouncementLatentProxy::GetChainStart() {
    return FDataTableRowHandle{};
}


