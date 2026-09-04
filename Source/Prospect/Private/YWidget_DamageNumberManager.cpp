#include "YWidget_DamageNumberManager.h"

UYWidget_DamageNumberManager::UYWidget_DamageNumberManager() {
    this->m_damageNumberClass = NULL;
    this->m_damageNumberContainer = NULL;
}

void UYWidget_DamageNumberManager::OnXpAmountGained(FVector Location, int32 xp) {
}

void UYWidget_DamageNumberManager::OnRequestNewDamageNumber(FYDamageNumberData Data) {
}

void UYWidget_DamageNumberManager::OnRemoveDamageNumber(UYWidget* Widget, ESlateVisibility newVisibility) {
}

void UYWidget_DamageNumberManager::OnPawnStateChanged(APawn* oldPawn, APawn* newPawn) {
}

void UYWidget_DamageNumberManager::OnHitTarget(const FYDealtDamageData& Data) {
}


