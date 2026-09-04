#include "YPerkComponent.h"
#include "Net/UnrealNetwork.h"

UYPerkComponent::UYPerkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_gpaComponent = NULL;
    this->m_playerStateComponent = NULL;
    this->m_healthComponent = NULL;
    this->m_characterMovementComponent = NULL;
    this->m_wasMatchPhaseStorm = false;
}

bool UYPerkComponent::RemovePerk(const FGuid& perkId) {
    return false;
}

void UYPerkComponent::PerkActionsAreLoaded(FYPerk loadedPerk) {
}

void UYPerkComponent::OnTargetingStopped(bool wasInterrupted) {
}

void UYPerkComponent::OnTargetingStarted() {
}

void UYPerkComponent::OnTakeDamage(const FYDealtDamageData& Data) {
}

void UYPerkComponent::OnStormStopped() {
}

void UYPerkComponent::OnStormStarted() {
}

void UYPerkComponent::OnSprintingStopped(bool wasInterrupted) {
}

void UYPerkComponent::OnSprintingStarted() {
}

void UYPerkComponent::OnSpinningUpStopped(bool wasInterrupted) {
}

void UYPerkComponent::OnSpinningUpStarted() {
}

void UYPerkComponent::OnRep_Perks(TArray<FYPerkInstance> oldPerks) {
}

void UYPerkComponent::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> previousMovementMOde, uint8 PreviousCustomMode) {
}

void UYPerkComponent::OnModifyDealDamage(FYDealtDamageData& Data) {
}

void UYPerkComponent::OnMeleeLightStopped(bool wasInterrupted) {
}

void UYPerkComponent::OnMeleeLightStarted() {
}

void UYPerkComponent::OnMeleeHeavyStopped(bool wasInterrupted) {
}

void UYPerkComponent::OnMeleeHeavyStarted() {
}

void UYPerkComponent::OnMatchPhaseChanged(const FYMatchPhaseData& newMatchPhase) {
}

void UYPerkComponent::OnHealthChanged(float CurrentHealth, AActor* Instigator) {
}

void UYPerkComponent::OnGameplayAttributeChanged(EYGameplayAttribute Attribute, float newAttributeValue, float oldAttributeValue) {
}

void UYPerkComponent::OnDealDamage(const FYDealtDamageData& Data) {
}

TArray<TSoftObjectPtr<UTexture2D>> UYPerkComponent::GetSpecificPerkIcons(TArray<FDataTableRowHandle> excluidePerks) const {
    return TArray<TSoftObjectPtr<UTexture2D>>();
}

TArray<AActor*> UYPerkComponent::GetPerkInstigators() const {
    return TArray<AActor*>();
}

TArray<TSoftObjectPtr<UTexture2D>> UYPerkComponent::GetPerkIcons(TArray<FDataTableRowHandle> excluidePerks) const {
    return TArray<TSoftObjectPtr<UTexture2D>>();
}

TArray<FText> UYPerkComponent::GetPerkDisplayNames() const {
    return TArray<FText>();
}

void UYPerkComponent::AddPerks(const TArray<FDataTableRowHandle>& addedPerks, EYGameplayContextType contextType, AActor* perkInstigator) {
}

FGuid UYPerkComponent::AddPerkFromRowHandle(const FDataTableRowHandle& rowHandle, EYGameplayContextType contextType, AActor* Instigator) {
    return FGuid{};
}

FGuid UYPerkComponent::AddPerkByPerkEntry(const FYRolledPerkEntry& rolledPerkEntry, EYGameplayContextType contextType) {
    return FGuid{};
}

FGuid UYPerkComponent::AddPerk(const FDataTableRowHandle& dataTableRow, EYGameplayContextType contextType, AActor* Instigator) {
    return FGuid{};
}

void UYPerkComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYPerkComponent, m_activePerkInstances);
}


