#include "YProgressComponent.h"

UYProgressComponent::UYProgressComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_totalTime = 10.0f;
    this->m_timeLeft = 0.0f;
}

void UYProgressComponent::StopProgress() {
}

void UYProgressComponent::StartProgress(float totalTime, float timeLeft) {
}

void UYProgressComponent::SetUIData(FProgressUIData progressData) {
}

void UYProgressComponent::SetDescription(FText Description) {
}

void UYProgressComponent::ReverseProgress(float totalTime, float timeLeft) {
}

void UYProgressComponent::ResumeProgress() {
}

void UYProgressComponent::ForceProgressValue(float progress) {
}


