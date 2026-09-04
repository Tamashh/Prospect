#include "HorizonTweenEvent.h"

UHorizonTweenEvent::UHorizonTweenEvent() {
}

void UHorizonTweenEvent::Stop() {
}

void UHorizonTweenEvent::SetFreeze(bool B) {
}

void UHorizonTweenEvent::Resume() {
}

void UHorizonTweenEvent::Play() {
}

void UHorizonTweenEvent::Pause() {
}

bool UHorizonTweenEvent::IsFreeze() {
    return false;
}

AHorizonTweenSystem* UHorizonTweenEvent::GetTweenSystem() {
    return NULL;
}

FHorizonTweenEventParameters UHorizonTweenEvent::GetTweenEventParam() {
    return FHorizonTweenEventParameters{};
}

int32 UHorizonTweenEvent::GetCurrentNumOfLoop() {
    return 0;
}

float UHorizonTweenEvent::GetCurrentDuration() {
    return 0.0f;
}

float UHorizonTweenEvent::GetCurrentAlpha() {
    return 0.0f;
}

void UHorizonTweenEvent::Finish(bool bTweenToEnd) {
}


