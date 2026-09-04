#include "YNPCCharacter.h"
#include "YMultiDataTableRowAssociationComponent.h"

AYNPCCharacter::AYNPCCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetUpdateFrequency = 1.0f;
    this->m_attachToLocalPlayerAtStart = false;
    this->m_registerCustomizationModeAssociation = false;
    this->m_multiRowAssociationComponent = CreateDefaultSubobject<UYMultiDataTableRowAssociationComponent>(TEXT("MultiRowAssociationComponent"));
    this->m_npcVoiceOverComponent = NULL;
    this->m_locationActor = NULL;
}

void AYNPCCharacter::OnDataTableRowHandleSet(const TArray<FDataTableRowHandle>& oldRowHandle, const TArray<FDataTableRowHandle>& newRowHandle) {
}


