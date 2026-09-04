#include "YPlayersMapDataManager.h"

AYPlayersMapDataManager::AYPlayersMapDataManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void AYPlayersMapDataManager::SetMarkersEvacuatioState(EYMapMarkerState newStateForMarkers) {
}

void AYPlayersMapDataManager::MulticastDebugMarkerForActorInRange_Implementation(UYMapMarkerData* marker) {
}

int32 AYPlayersMapDataManager::GetClientRelevantMapMarkersCount() const {
    return 0;
}


