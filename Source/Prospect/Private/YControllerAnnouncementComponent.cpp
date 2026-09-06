#include "YControllerAnnouncementComponent.h"

UYControllerAnnouncementComponent::UYControllerAnnouncementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_soundBusAnnouncementComponent = NULL;
}

int32 UYControllerAnnouncementComponent::RetrieveCategoryPriority(const FDataTableRowHandle& categoryRowHandle) {
    return 0;
}

int32 UYControllerAnnouncementComponent::RetrieveAnnouncementPriority(const FDataTableRowHandle& rowHandle) {
    return 0;
}

void UYControllerAnnouncementComponent::OnLoadedAudio(const TArray<FSoftObjectPath> LoadedObjects, FYAnnouncementRequestAysncLoadData Data, float timestampStartedLoad) {
}

void UYControllerAnnouncementComponent::OnAnnouncementFinishedRegularly(const FString& speakerId) {
}

bool UYControllerAnnouncementComponent::IsAnyAnnouncementPlaying() {
    return false;
}

int32 UYControllerAnnouncementComponent::GetCurrentHighestPriority() {
    return 0;
}

FYAnnouncementPlayEntryData UYControllerAnnouncementComponent::GetCurrentAnnouncementPlayingForSpeaker(const FString& speakerId) {
    return FYAnnouncementPlayEntryData{};
}

bool UYControllerAnnouncementComponent::AllowedToQueueAnnouncement(const FDataTableRowHandle& rowHandle) {
    return false;
}


