#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "UObject/NoExportTypes.h"
#include "EYEnemyType.h"
#include "YAICustomNoiseEvent.h"
#include "YAISense_CustomHearing.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, Config=Game)
class UYAISense_CustomHearing : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAICustomNoiseEvent> NoiseEvents;

    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedOfSoundSq;

public:
    UYAISense_CustomHearing();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportCustomNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag, TArray<EYEnemyType> exclusiveEnemies);
    
};

