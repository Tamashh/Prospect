#include "YCharacterEmoteComponent.h"
#include "Net/UnrealNetwork.h"

UYCharacterEmoteComponent::UYCharacterEmoteComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYCharacterEmoteComponent::TryEmoteStateAndPlayEmoteAnimation() {
}

void UYCharacterEmoteComponent::ServerSetSelectedEmote_Implementation(int32 SlotIndex) {
}
bool UYCharacterEmoteComponent::ServerSetSelectedEmote_Validate(int32 SlotIndex) {
    return true;
}

void UYCharacterEmoteComponent::SelectedNewEmote(int32 itemSlotID) {
}

void UYCharacterEmoteComponent::OnTransitionFirstPersonState() {
}

void UYCharacterEmoteComponent::OnRep_SelectedEmoteChanged() {
}

void UYCharacterEmoteComponent::OnRemoveEmoteState() {
}

void UYCharacterEmoteComponent::OnMovementInputProcessed() {
}

void UYCharacterEmoteComponent::OnEmoteStateDeactivated(bool wasInterrupted) {
}

void UYCharacterEmoteComponent::OnCommWheelUsed(UYCommWheelVOComponent* commWheelComponent, FDataTableRowHandle commWheelEntry) {
}

void UYCharacterEmoteComponent::OnActivatedEmoteState() {
}

void UYCharacterEmoteComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYCharacterEmoteComponent, m_selectedEmote);
}


