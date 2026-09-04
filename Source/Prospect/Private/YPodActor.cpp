#include "YPodActor.h"
#include "Net/UnrealNetwork.h"
#include "YDataTableRowAssociationComponent.h"

AYPodActor::AYPodActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldNeverSeamlessTravel = true;
    this->m_startedIntro = false;
    this->m_introFinished = false;
    this->m_spawnContext = EYPodSpawningTypeContext::NoneAssigned;
    this->m_rowAssociationComponent = CreateDefaultSubobject<UYDataTableRowAssociationComponent>(TEXT("DatatableComponent"));
    this->m_despawnCheckDelay = 60.0f;
}

void AYPodActor::SetSpawnContext(EYPodSpawningTypeContext spawnContext) {
}

void AYPodActor::OnRep_SpawnContext(EYPodSpawningTypeContext oldSpawnContext) {
}

void AYPodActor::OnFinishedAsyncLoading(int32 loadHandle) {
}

void AYPodActor::OnDataTableRowHandleSet(FDataTableRowHandle oldRowHandle, FDataTableRowHandle newRowHandle) {
}



void AYPodActor::AddToDespawnChecks() {
}

void AYPodActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYPodActor, m_spawnContext);
}


