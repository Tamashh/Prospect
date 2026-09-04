#include "YMissionActor.h"
#include "Net/UnrealNetwork.h"

AYMissionActor::AYMissionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetUpdateFrequency = 1.0f;
    this->m_stepHandle = -1;
    this->m_actorHandle = -1;
    this->m_missionStatus = EYMissionResultType::Active;
    this->m_skeletalMeshComponent = NULL;
    this->m_staticMeshComponent = NULL;
}

void AYMissionActor::SetActorMissionStatus(EYMissionResultType missionResultType) {
}

void AYMissionActor::OnRep_MissionStatusChanged() {
}

void AYMissionActor::OnRep_InitializationData() {
}

void AYMissionActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYMissionActor, m_replicatedInitializationData);
    DOREPLIFETIME(AYMissionActor, m_stepHandle);
    DOREPLIFETIME(AYMissionActor, m_actorHandle);
    DOREPLIFETIME(AYMissionActor, m_missionStatus);
}


