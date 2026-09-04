#include "YActivityLocationsManager.h"

UYActivityLocationsManager::UYActivityLocationsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYActivityLocationsManager::OnActivitiesLoaded() {
}

TArray<AYActivityLocation*> UYActivityLocationsManager::FindSpawnLocations(FYFindActivityLocationsRequestData Request) {
    return TArray<AYActivityLocation*>();
}

UYActivityLocationsManager* UYActivityLocationsManager::FindActivityLocationsManager(UObject* WorldContextObject) {
    return NULL;
}


