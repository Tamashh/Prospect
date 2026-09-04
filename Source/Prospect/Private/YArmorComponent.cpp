#include "YArmorComponent.h"
#include "Net/UnrealNetwork.h"

UYArmorComponent::UYArmorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_effectiveHealthPerArmorConstant = 0.0599999987f;
    this->m_damageReductionScalarMin = 0.400000006f;
    this->m_damageReductionScalarMax = 1.0f;
}

bool UYArmorComponent::TryGetEquippedArmorForItemType(EYItemType ItemType, FYActiveArmorData& outActiveArmor) const {
    return false;
}

void UYArmorComponent::OnRep_ActiveArmor() {
}

bool UYArmorComponent::HasArmorEquipped(EYItemType ItemType) const {
    return false;
}

void UYArmorComponent::HandleOnPlayerStateChanged(APlayerState* PlayerState) {
}

void UYArmorComponent::HandleOnPlayerSetUpdated(UYStateInventoryComponent* stateInventoryComponent) {
}

void UYArmorComponent::HandleOnControllerChanged(AController* Controller) {
}

TArray<FYActiveArmorData> UYArmorComponent::GetActiveArmor() const {
    return TArray<FYActiveArmorData>();
}

void UYArmorComponent::EvaluateDamage(FYDealtDamageData& outModifiedDamageData) {
}

void UYArmorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYArmorComponent, m_activeArmor);
}


