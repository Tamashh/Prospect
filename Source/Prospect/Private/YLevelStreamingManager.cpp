#include "YLevelStreamingManager.h"

AYLevelStreamingManager::AYLevelStreamingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AYLevelStreamingManager::HandleOnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AYLevelStreamingManager::HandleOnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

TArray<FName> AYLevelStreamingManager::GetTargetLevelNames() {
    return TArray<FName>();
}


