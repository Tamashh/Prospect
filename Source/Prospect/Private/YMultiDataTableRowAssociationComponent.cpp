#include "YMultiDataTableRowAssociationComponent.h"
#include "Net/UnrealNetwork.h"

UYMultiDataTableRowAssociationComponent::UYMultiDataTableRowAssociationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYMultiDataTableRowAssociationComponent::SetRowHandles(const TArray<FDataTableRowHandle>& rowHandle) {
}

void UYMultiDataTableRowAssociationComponent::OnRep_RowHandle(const TArray<FDataTableRowHandle>& oldRowHandle) {
}

TArray<FDataTableRowHandle> UYMultiDataTableRowAssociationComponent::GetRowHandles() {
    return TArray<FDataTableRowHandle>();
}

void UYMultiDataTableRowAssociationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYMultiDataTableRowAssociationComponent, m_rowHandles);
}


