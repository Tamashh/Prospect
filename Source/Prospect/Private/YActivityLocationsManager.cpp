#include "YActivityLocationsManager.h"

UYActivityLocationsManager::UYActivityLocationsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYActivityLocationsManager::OnActivitiesLoaded() {
}

TArray<AYActivityLocation*> UYActivityLocationsManager::FindSpawnLocations(FYFindActivityLocationsRequestData Request) {
    return TArray<AYActivityLocation*>();
}

AActor* UYActivityLocationsManager::FindClosestActivityLocationTo(AActor* Actor, EYActivityType activityType) {
    return NULL;
}

UYActivityLocationsManager* UYActivityLocationsManager::FindActivityLocationsManager(UObject* WorldContextObject) {
    return NULL;
}


