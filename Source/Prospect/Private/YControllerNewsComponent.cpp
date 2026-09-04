#include "YControllerNewsComponent.h"

UYControllerNewsComponent::UYControllerNewsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerNewsComponent::StoreUserDataToPlayfab() {
}

void UYControllerNewsComponent::ShowNewsScreen(int32 Index, bool hasLoginBonus, bool autoOpen) const {
}

bool UYControllerNewsComponent::ShouldShowNewsScreen(bool returningFromMatch) const {
    return false;
}

void UYControllerNewsComponent::RefreshNewsData() const {
}

void UYControllerNewsComponent::OnWindowFocusChanged(bool isFocused) {
}

void UYControllerNewsComponent::OnRetentionBonusDataRequestFailed() {
}

void UYControllerNewsComponent::OnRetentionBonusDataReceived(FYRetentionProgress progress) {
}

void UYControllerNewsComponent::OnNewsScreenClosed() {
}

void UYControllerNewsComponent::OnNewsItemOpened(const FString& ID) {
}

void UYControllerNewsComponent::OnNewsItemButtonClicked(const FString& ID, FYNewsItemButtonData Data) {
}

void UYControllerNewsComponent::OnInitialNewsUpdate() {
}

void UYControllerNewsComponent::MarkNewsItemAsSeen(const FString& ID, bool seen) {
}

void UYControllerNewsComponent::MarkNewsItemAsRead(const FString& ID, bool read) {
}

bool UYControllerNewsComponent::IsNewsItemOpened() const {
    return false;
}

void UYControllerNewsComponent::Initialize() {
}

void UYControllerNewsComponent::HideNewsScreen() {
}

bool UYControllerNewsComponent::HasAnyUnseenNewsItem(float priorityThreshold) const {
    return false;
}

bool UYControllerNewsComponent::HasAnyUnreadNewsItemToShowAfterMatch(float priorityThreshold) const {
    return false;
}

bool UYControllerNewsComponent::HasAnyUnreadNewsItem(float priorityThreshold) const {
    return false;
}

bool UYControllerNewsComponent::GetSingleNewsItemUserData(const FString& ID, FYNewsItemUserData& userData) const {
    return false;
}

TArray<FYNewsItemUserData> UYControllerNewsComponent::GetNewsItemUserData() const {
    return TArray<FYNewsItemUserData>();
}

FDateTime UYControllerNewsComponent::GetLastCacheUpdateTime() const {
    return FDateTime{};
}

TArray<FYNewsItem> UYControllerNewsComponent::GetCurrentNewsItems() const {
    return TArray<FYNewsItem>();
}

TArray<FYNewsItem> UYControllerNewsComponent::GetAllNewsItems() const {
    return TArray<FYNewsItem>();
}


