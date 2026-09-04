#include "YWidget_PlayerCharacterPlate.h"

UYWidget_PlayerCharacterPlate::UYWidget_PlayerCharacterPlate() {
    this->m_associatedPlayerCharacter = NULL;
    this->m_playerState = NULL;
    this->m_levelText = NULL;
}

void UYWidget_PlayerCharacterPlate::UpdateTeamComponentAndDBNOShieldStatus() {
}

void UYWidget_PlayerCharacterPlate::OnUserInfoUpdated() {
}

void UYWidget_PlayerCharacterPlate::OnSquadsChanged() {
}

void UYWidget_PlayerCharacterPlate::OnPlayerMatchStateChanged(EYPlayerMatchState newState, AYPlayerState* PlayerState) {
}

void UYWidget_PlayerCharacterPlate::OnHealthEmpty(UYHealthComponent* healthComponent, AActor* Instigator) {
}

void UYWidget_PlayerCharacterPlate::OnDBNOStateDeactivated(bool wasInterrupted) {
}

void UYWidget_PlayerCharacterPlate::OnDBNOStateActivated() {
}

void UYWidget_PlayerCharacterPlate::OnAssociatedPlayerStateSet(AYPlayerState* PlayerState) {
}







void UYWidget_PlayerCharacterPlate::BindToLocalPlayerCharacterDeath(APawn* oldPawn, APawn* newPawn) {
}


