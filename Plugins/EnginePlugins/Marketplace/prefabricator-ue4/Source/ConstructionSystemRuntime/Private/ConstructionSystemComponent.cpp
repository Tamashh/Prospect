#include "ConstructionSystemComponent.h"

UConstructionSystemComponent::UConstructionSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CursorMaterial = NULL;
    this->CursorInvalidMaterial = NULL;
    this->TraceStartDistance = 1000.0f;
    this->TraceSweepRadius = 40.0f;
    this->ConstructionCameraActor = NULL;
    this->ConstructionCameraTransitionTime = 0.150000006f;
    this->ConstructionCameraTransitionExp = 1.0f;
    this->BuildMenuUI = NULL;
    this->BuildMenuData = NULL;
    this->BuildMenuUIInstance = NULL;
    this->ActiveToolType = EConstructionSystemToolType::BuildTool;
}

void UConstructionSystemComponent::ToggleConstructionSystem() {
}

void UConstructionSystemComponent::ShowBuildMenu() {
}

void UConstructionSystemComponent::SetActiveTool(EConstructionSystemToolType InToolType) {
}

void UConstructionSystemComponent::HideBuildMenu() {
}

UConstructionSystemTool* UConstructionSystemComponent::GetTool(EConstructionSystemToolType InToolType) {
    return NULL;
}

EConstructionSystemToolType UConstructionSystemComponent::GetActiveToolType() const {
    return EConstructionSystemToolType::BuildTool;
}

UConstructionSystemTool* UConstructionSystemComponent::GetActiveTool() {
    return NULL;
}

void UConstructionSystemComponent::EnableConstructionSystem(EConstructionSystemToolType InToolType) {
}

void UConstructionSystemComponent::DisableConstructionSystem() {
}


