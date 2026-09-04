#include "YActorWithGenericTeam.h"

AYActorWithGenericTeam::AYActorWithGenericTeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void AYActorWithGenericTeam::SetTeamID(EYTeam TeamID) {
}

EYTeam AYActorWithGenericTeam::GetTeamFromActor(AActor* Actor) {
    return EYTeam::Compilexfix;
}


