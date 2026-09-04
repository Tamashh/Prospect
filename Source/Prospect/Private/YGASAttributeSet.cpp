#include "YGASAttributeSet.h"
#include "Net/UnrealNetwork.h"

UYGASAttributeSet::UYGASAttributeSet() {
}

void UYGASAttributeSet::OnRep_Poison(const FGameplayAttributeData& PrevValue) {
}

void UYGASAttributeSet::OnRep_Health(const FGameplayAttributeData& PrevValue) {
}

void UYGASAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYGASAttributeSet, m_health);
    DOREPLIFETIME(UYGASAttributeSet, m_poison);
}


