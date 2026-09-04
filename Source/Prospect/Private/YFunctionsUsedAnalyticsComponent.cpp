#include "YFunctionsUsedAnalyticsComponent.h"

UYFunctionsUsedAnalyticsComponent::UYFunctionsUsedAnalyticsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_toolWheelUsedCount = 0;
    this->m_mapUsedCount = 0;
    this->m_commWheelUsedCount = 0;
    this->m_sprintUsedCount = 0;
}

void UYFunctionsUsedAnalyticsComponent::OnToolWheelUsedCallback(EYWheelType wheelType) {
}

void UYFunctionsUsedAnalyticsComponent::OnSprintUsedCallback() {
}

void UYFunctionsUsedAnalyticsComponent::OnControllerPawnChanged(APawn* oldPawn, APawn* newPawn) {
}

void UYFunctionsUsedAnalyticsComponent::OnCommWheelUsedCallback(EYWheelType wheelType) {
}


