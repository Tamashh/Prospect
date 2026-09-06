#include "YControllerStationComponent.h"

UYControllerStationComponent::UYControllerStationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_activePlayMenuScreen = EYPlayMenuScreenType::None;
    this->m_onLeftSubMenuFromQuickMenuFadeOutDuration = 0.200000003f;
    this->m_onLeftSubMenuFromQuickMenuFadeInDelay = 1.0f;
    this->m_onLeftSubMenuFromQuickMenuFadeInDuration = 0.400000006f;
    this->m_currentNPCActor = NULL;
}

void UYControllerStationComponent::TryFadeFromBlackAfterSubMenuLeftFromQuickMenu() {
}

void UYControllerStationComponent::ToggleStationShop() {
}

void UYControllerStationComponent::ToggleStationObjectiveList() {
}

void UYControllerStationComponent::ToggleStationInventory() {
}

void UYControllerStationComponent::ToggleStationHUD() {
}

void UYControllerStationComponent::ToggleStationFortunaPass() {
}

void UYControllerStationComponent::SetRequestedSceneRowHandle(const FDataTableRowHandle& requestedScene) {
}

void UYControllerStationComponent::OnStackChanged(EYInputUIStackType stackType, bool Visible) {
}

void UYControllerStationComponent::OnSetActivePrimaryTab(FGameplayTag newTab) {
}

void UYControllerStationComponent::OnSetActivePlayMenuScreen(EYPlayMenuScreenType newScreenType) {
}

void UYControllerStationComponent::GetRequestedSceneRowHandle(FDataTableRowHandle& requestedScene) const {
}

UYControllerStationComponent* UYControllerStationComponent::FindControllerStationComponentChecked(AActor* actorContext) {
    return NULL;
}

UYControllerStationComponent* UYControllerStationComponent::FindControllerStationComponent(AActor* actorContext) {
    return NULL;
}

void UYControllerStationComponent::ExecuteNPCCameraTransition(AActor* actorContext, AActor* npcActor, FDataTableRowHandle rowHandle) {
}


