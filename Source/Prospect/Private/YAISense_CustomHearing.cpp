#include "YAISense_CustomHearing.h"

UYAISense_CustomHearing::UYAISense_CustomHearing() {
    this->SpeedOfSoundSq = 0.0f;
}

void UYAISense_CustomHearing::ReportCustomNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag, TArray<EYEnemyType> exclusiveEnemies) {
}


