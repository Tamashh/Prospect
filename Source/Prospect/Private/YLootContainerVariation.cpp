#include "YLootContainerVariation.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

AYLootContainerVariation::AYLootContainerVariation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_skelMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("skelMeshComponent"));
    this->m_openAnimation = NULL;
    this->m_openSound = NULL;
    this->m_closeSound = NULL;
    this->m_isOpen = false;
    this->m_isEmpty = false;
    this->m_overlayGleamMaterialParameterName = TEXT("ToggleOverlay");
    this->m_skelMeshComponent->SetupAttachment(RootComponent);
}

void AYLootContainerVariation::ResetLootContainer() {
}

void AYLootContainerVariation::OnRowLoaded() {
}

void AYLootContainerVariation::OnRep_OnLootContainerDefinition() {
}

void AYLootContainerVariation::OnRep_IsOpen() const {
}

void AYLootContainerVariation::OnRep_IsEmpty() {
}

void AYLootContainerVariation::OnInventoryUpdated(UYStateInventoryComponent* stateInventoryComponent) {
}

void AYLootContainerVariation::OnInteractionCompleted(EYInteractionType interactionType, AYPlayerController_Match* interactingPlayer) {
}

void AYLootContainerVariation::MulticastPlayOpenSound_Implementation(bool isOpening) {
}

void AYLootContainerVariation::Initialize(FDataTableRowHandle rowHandle, EYLootContainerTier lootTier) {
}

void AYLootContainerVariation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYLootContainerVariation, m_lootContainerDefinition);
    DOREPLIFETIME(AYLootContainerVariation, m_isOpen);
    DOREPLIFETIME(AYLootContainerVariation, m_isEmpty);
}


