#include "YGameViewportClient.h"

UYGameViewportClient::UYGameViewportClient() {
    this->m_cachedTravelFailureType = ETravelFailure::NoLevel;
    this->m_cachedNetworkFailureType = ENetworkFailure::NetDriverAlreadyExists;
}

void UYGameViewportClient::ToggleGameVersionDisplayInfo() {
}

bool UYGameViewportClient::RemoveDebugString(int32 Handle) {
    return false;
}

bool UYGameViewportClient::RemoveAllDebugText() {
    return false;
}

void UYGameViewportClient::FadeOut() {
}

void UYGameViewportClient::FadeIn() {
}

void UYGameViewportClient::Fade(const float Duration, const FString& Context, const EYFadeDirection fadeDirection) {
}

void UYGameViewportClient::ClearFade() {
}

int32 UYGameViewportClient::AddDebugString(const FString& Text, FColor Color) {
    return 0;
}


