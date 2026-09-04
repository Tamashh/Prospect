#include "YControllerStateInputComponent.h"

UYControllerStateInputComponent::UYControllerStateInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_characterStateComponent = NULL;
}

void UYControllerStateInputComponent::OnTimeoutBlockMovementInputState(EYInputBlockingAssociation bindingAssociation) {
}

void UYControllerStateInputComponent::OnPawnAssigned(APawn* oldPawn, APawn* newPawn) {
}


