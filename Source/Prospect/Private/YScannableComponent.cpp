#include "YScannableComponent.h"

UYScannableComponent::UYScannableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_autoDeactivateOnDeath = true;
    this->m_isScannable = true;
}

void UYScannableComponent::SetScannableRowHandle(FDataTableRowHandle rowHandle) {
}

void UYScannableComponent::SetIsScannable(bool IsEnabled) {
}

void UYScannableComponent::OnHealthEmpty(UYHealthComponent* healthComponent, AActor* Instigator) {
}

void UYScannableComponent::GetScannableDataBP(FYScannableRow& dataRow) {
}

UYScannableComponent* UYScannableComponent::CreateScannableComponent(AActor* Owner, FDataTableRowHandle dataRowHandle) {
    return NULL;
}


