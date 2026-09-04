#include "YDataTableRowAssociationComponent.h"
#include "Net/UnrealNetwork.h"

UYDataTableRowAssociationComponent::UYDataTableRowAssociationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYDataTableRowAssociationComponent::SetRowHandle(FDataTableRowHandle rowHandle) {
}

void UYDataTableRowAssociationComponent::OnRep_RowHandle(FDataTableRowHandle oldRowHandle) {
}

FDataTableRowHandle UYDataTableRowAssociationComponent::GetRowHandle() {
    return FDataTableRowHandle{};
}

void UYDataTableRowAssociationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYDataTableRowAssociationComponent, m_rowHandle);
}


