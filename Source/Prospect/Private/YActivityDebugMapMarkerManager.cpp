#include "YActivityDebugMapMarkerManager.h"
#include "Templates/SubclassOf.h"

UYActivityDebugMapMarkerManager::UYActivityDebugMapMarkerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_mapMarkerClass = NULL;
}

void UYActivityDebugMapMarkerManager::ClientShowSimpleDebug_Implementation(const TArray<FYDebugActivityLocationSimple>& lootPointsInfo, EYActivityType Type) {
}

void UYActivityDebugMapMarkerManager::AddGenericDebugMapMarkerForActors(TArray<AActor*> actors, TSubclassOf<UYMapMarkerData> markerDataClass) {
}


