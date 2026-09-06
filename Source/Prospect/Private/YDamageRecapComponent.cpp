#include "YDamageRecapComponent.h"
#include "Net/UnrealNetwork.h"

UYDamageRecapComponent::UYDamageRecapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_showDamageRecap = false;
    this->m_ownerPawn = NULL;
}

void UYDamageRecapComponent::ShowDamageRecap() {
}

void UYDamageRecapComponent::ServerResetDealDamageInfo_Implementation(bool isTakeDamageEvents) {
}
bool UYDamageRecapComponent::ServerResetDealDamageInfo_Validate(bool isTakeDamageEvents) {
    return true;
}

void UYDamageRecapComponent::ServerRequestDebugUncondensedDamageInfo_Implementation(bool isTakeDamageEvents) {
}
bool UYDamageRecapComponent::ServerRequestDebugUncondensedDamageInfo_Validate(bool isTakeDamageEvents) {
    return true;
}

void UYDamageRecapComponent::ServerRequestCondensedDamageInfo_Implementation() {
}
bool UYDamageRecapComponent::ServerRequestCondensedDamageInfo_Validate() {
    return true;
}

void UYDamageRecapComponent::OnTakeDamage(const FYDealtDamageData& Data) {
}

void UYDamageRecapComponent::OnRep_LastDamageDealtEvent() const {
}

void UYDamageRecapComponent::OnRep_DebugUncondensedDamageInfo() const {
}

void UYDamageRecapComponent::OnRep_CondensedDamageInfo() const {
}

void UYDamageRecapComponent::OnPawnSet(APawn* oldPawn, APawn* newPawn) {
}

void UYDamageRecapComponent::OnLeaveDBNO(bool wasInterrupted) {
}

void UYDamageRecapComponent::OnHealthDataChanged(float CurrentHealth, AActor* Instigator) {
}

void UYDamageRecapComponent::OnEnterDeath() {
}

void UYDamageRecapComponent::OnEnterDBNO() {
}

void UYDamageRecapComponent::OnDealDamage(const FYDealtDamageData& Data) {
}

void UYDamageRecapComponent::LogCondensedEvents() {
}

void UYDamageRecapComponent::HideDamageRecap() {
}

bool UYDamageRecapComponent::HasRecentlyAttackedHostilePlayer(float timeLimit) const {
    return false;
}

bool UYDamageRecapComponent::HasBeenAttackedRecentlyByHostilePlayer(float timeLimit) const {
    return false;
}

FYDamageEvent UYDamageRecapComponent::GetTotalDamageEventsFromActor(AActor* Actor) {
    return FYDamageEvent{};
}

TArray<FYCondensedDamageData> UYDamageRecapComponent::GetCondensedDamageInfo() {
    return TArray<FYCondensedDamageData>();
}

void UYDamageRecapComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYDamageRecapComponent, m_condensedDamageInfo);
    DOREPLIFETIME(UYDamageRecapComponent, m_debugUncondensedDamageInfo);
    DOREPLIFETIME(UYDamageRecapComponent, m_lastDamageDealtEvent);
}


