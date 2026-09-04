#include "YActorUIComponent.h"

UYActorUIComponent::UYActorUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_maxRenderDistance = 500.0f;
    this->m_overrideScaleDistance = -1.0f;
    this->m_minRenderDistance = 0.0f;
    this->m_minScaleValue = 1.0f;
    this->m_visibleThroughObstacles = false;
    this->m_componentType = EYUIComponentType::Normal;
    this->m_isEnabled = true;
    this->m_gameplayTemporaryDisabled = false;
    this->m_isSpawningActorAndShouldBeHidden = false;
    this->m_overridenSceneComponent = NULL;
    this->m_activityContext = EYActivityType::None;
    this->m_widget = NULL;
    this->m_markerType = EYMapMarkerType::NONE;
}

void UYActorUIComponent::SetWidgetData(const FYActorUIWidgetData& uiWidgetData) {
}

void UYActorUIComponent::SetWidgetClass(TSoftClassPtr<UYActorWidget> uiClass) {
}

void UYActorUIComponent::SetEnabled(bool IsEnabled) {
}

void UYActorUIComponent::OnWidgetLoaded() {
}

UYActorWidget* UYActorUIComponent::GetWidget() {
    return NULL;
}

void UYActorUIComponent::FindHelperUIComponentsWorld(UObject* Context, TArray<UYActorUIComponent*>& outHelperComponents) {
}

UYActorUIComponent* UYActorUIComponent::CreateActorUIComponent(AActor* Owner, FYActorUIWidgetData uiData, TSoftClassPtr<UYActorWidget> Widget) {
    return NULL;
}


