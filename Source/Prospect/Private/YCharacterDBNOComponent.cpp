#include "YCharacterDBNOComponent.h"
#include "Net/UnrealNetwork.h"

UYCharacterDBNOComponent::UYCharacterDBNOComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_gameStateMatch = NULL;
    this->m_timestampEnteredDBNO = -1.0f;
    this->m_dbnoTeleportChargesLeft = 1;
    this->m_dbnoShieldHealth = 0.0f;
    this->m_currentDBNOTotalDuration = 0.0f;
}

void UYCharacterDBNOComponent::TryFadeFromBlackAfterDBNOTeleport() {
}

void UYCharacterDBNOComponent::TeleportStopInput() {
}

void UYCharacterDBNOComponent::TeleportStartInput() {
}

void UYCharacterDBNOComponent::SetDBNOTeleportCharges(int32 chargesAmount) {
}

void UYCharacterDBNOComponent::SetCurrentDBNOShieldHealth(float shieldHealthValue) {
}

void UYCharacterDBNOComponent::ServerTeleportToStartLocation_Implementation() {
}
bool UYCharacterDBNOComponent::ServerTeleportToStartLocation_Validate() {
    return true;
}

void UYCharacterDBNOComponent::OnTeleportActiveDBNO() {
}

void UYCharacterDBNOComponent::OnRep_TeleportChargesLeftChanged() {
}

void UYCharacterDBNOComponent::OnRep_DBNOShieldHealth() {
}

void UYCharacterDBNOComponent::OnOwnerTakeDamage(FYDealtDamageData& Data) {
}

void UYCharacterDBNOComponent::OnLeaveDBNO(bool wasInterupted) {
}

void UYCharacterDBNOComponent::OnInteractionStarted_Revive(EYInteractionType interactionType, AYPlayerController_Match* interactingPlayer) {
}

void UYCharacterDBNOComponent::OnInteractionComplete_Revive(EYInteractionType interactionType, AYPlayerController_Match* interactingPlayer) {
}

void UYCharacterDBNOComponent::OnEnterRevive() {
}

void UYCharacterDBNOComponent::OnEnterDBNO() {
}

void UYCharacterDBNOComponent::OnDBNOTimerCompleted() {
}

void UYCharacterDBNOComponent::MulticastOnTeleported_Implementation() {
}

void UYCharacterDBNOComponent::MulticastOnExecuted_Implementation() {
}

bool UYCharacterDBNOComponent::IsActorInDBNO(AActor* actorContext) {
    return false;
}

bool UYCharacterDBNOComponent::HasDBNOTeleportCharges() {
    return false;
}

float UYCharacterDBNOComponent::GetDBNOShieldMaxHealth() const {
    return 0.0f;
}

float UYCharacterDBNOComponent::GetDBNOShieldHealthRation() const {
    return 0.0f;
}

float UYCharacterDBNOComponent::GetDBNOShieldCurrentHealth() {
    return 0.0f;
}

void UYCharacterDBNOComponent::Execute(AYPlayerController* interactingPlayer, bool perfectInteraction) {
}

void UYCharacterDBNOComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYCharacterDBNOComponent, m_dbnoTeleportChargesLeft);
    DOREPLIFETIME(UYCharacterDBNOComponent, m_dbnoShieldHealth);
    DOREPLIFETIME(UYCharacterDBNOComponent, m_currentDBNOTotalDuration);
}


