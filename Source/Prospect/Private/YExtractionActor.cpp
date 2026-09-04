#include "YExtractionActor.h"
#include "Net/UnrealNetwork.h"
#include "YObjectInteractionComponent.h"

AYExtractionActor::AYExtractionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_interactionComponent = CreateDefaultSubobject<UYObjectInteractionComponent>(TEXT("interactionComponent"));
    this->m_activationTime = 5.0f;
    this->m_activationDuration = 60.0f;
    this->m_state = EYExtractionActorState::Inactive;
}

void AYExtractionActor::StartActivation_Implementation() {
}

void AYExtractionActor::OnRep_State() {
}

void AYExtractionActor::ExtractionStationActivated() {
}

void AYExtractionActor::DeactivateExtractionStation_Implementation() {
}

void AYExtractionActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYExtractionActor, m_state);
}


