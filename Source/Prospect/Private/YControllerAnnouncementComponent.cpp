#include "YControllerAnnouncementComponent.h"

UYControllerAnnouncementComponent::UYControllerAnnouncementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_audioAnnouncementComponent = NULL;
    this->m_soundBusAnnouncementComponent = NULL;
}

int32 UYControllerAnnouncementComponent::RetrieveAnnouncementPriority(const FDataTableRowHandle& rowHandle) {
    return 0;
}

void UYControllerAnnouncementComponent::OnLoadedAudio(const TArray<FSoftObjectPath> LoadedObjects, FYAnnouncementRequestAysncLoadData Data, float timestampStartedLoad) {
}

void UYControllerAnnouncementComponent::OnAnnouncementFinishedRegularly(const FString& speakerId) {
}

FYAnnouncementPlayEntryData UYControllerAnnouncementComponent::GetCurrentAnnouncementPlayingForSpeaker(const FString& speakerId) {
    return FYAnnouncementPlayEntryData{};
}

bool UYControllerAnnouncementComponent::AllowedToQueueAnnouncement(const FDataTableRowHandle& rowHandle) {
    return false;
}


