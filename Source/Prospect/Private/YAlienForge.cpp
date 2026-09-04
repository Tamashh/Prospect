#include "YAlienForge.h"
#include "Net/UnrealNetwork.h"

AYAlienForge::AYAlienForge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldNeverSeamlessTravel = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_activeState = EYAlienForgeState::None;
    this->m_isValidRecipeInForge = false;
    this->m_isAlienForgeDebugMode = false;
}

void AYAlienForge::TakeAllItemsFromTheAlienForgeNative(const UYStateInventoryComponent* interactingPlayerStateInventoryComponent) {
}

void AYAlienForge::StartForgingNative() {
}

void AYAlienForge::RecipeCheckCompleted(const FYAlienForgeProgressDescriptionState& alienForgeInputOutputData, const bool validRecipe) {
}

void AYAlienForge::OnRep_ItemMapping() const {
}

void AYAlienForge::OnRep_IsValidRecipeChanged() const {
}

void AYAlienForge::OnRep_ActiveStateChanged() {
}





void AYAlienForge::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYAlienForge, m_activeState);
    DOREPLIFETIME(AYAlienForge, m_itemMapping);
    DOREPLIFETIME(AYAlienForge, m_isValidRecipeInForge);
}


