#include "YObjectInteractionComponent.h"
#include "Net/UnrealNetwork.h"

UYObjectInteractionComponent::UYObjectInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_interactionType = EYInteractionType::None;
    this->m_showInteractionWidget = true;
    this->m_disableAfterInteractionCompleted = false;
    this->m_displayItemCountOnInteractionText = false;
    this->m_maxInteractionDistance = 0.0f;
    this->m_blockMovementWhileInteracting = true;
    this->m_maximumAmountOfInteractingPlayer = -1;
    this->m_requiresPerfectLineOfSight = false;
    this->m_currentSelectedRelevantInteraction = false;
    this->m_notifyAllClients = false;
    this->m_currentlyBeingInteracted = false;
    this->m_interactionDuration = -1.0f;
    this->m_includeChildsInInteractionVisualization = false;
    this->m_isActive = true;
}

void UYObjectInteractionComponent::SetInteractionMessage(const FText& newMessage) {
}

void UYObjectInteractionComponent::SetEnabled(bool Active) {
}

void UYObjectInteractionComponent::OnRep_CurrentlyBeingInteracted() {
}

void UYObjectInteractionComponent::OnRep_CurrentInteractingPlayerStates() const {
}

void UYObjectInteractionComponent::OnInteractionUpdate(const FYInteractionUpdateData& interactionData) {
}

bool UYObjectInteractionComponent::IsEnabled() const {
    return false;
}

bool UYObjectInteractionComponent::FindComponentsToVisualizeInteraction(TArray<UPrimitiveComponent*>& OutComponents) const {
    return false;
}

void UYObjectInteractionComponent::AddComponentToVisualizeInteraction(UPrimitiveComponent* PrimitiveComponent) {
}

void UYObjectInteractionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYObjectInteractionComponent, m_maxInteractionDistance);
    DOREPLIFETIME(UYObjectInteractionComponent, m_blockMovementWhileInteracting);
    DOREPLIFETIME(UYObjectInteractionComponent, m_currentlyBeingInteracted);
    DOREPLIFETIME(UYObjectInteractionComponent, m_currentInteractingPlayerStates);
    DOREPLIFETIME(UYObjectInteractionComponent, m_interactionDuration);
    DOREPLIFETIME(UYObjectInteractionComponent, m_isActive);
}


