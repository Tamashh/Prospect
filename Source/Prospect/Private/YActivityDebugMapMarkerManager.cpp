#include "YActivityDebugMapMarkerManager.h"

UYActivityDebugMapMarkerManager::UYActivityDebugMapMarkerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_mapMarkerClass = NULL;
}

void UYActivityDebugMapMarkerManager::ClientShowSimpleDebug_Implementation(const TArray<FYDebugActivityLocationSimple>& lootPointsInfo, EYActivityType Type) {
}


