#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense_Hearing.h"
#include "UObject/NoExportTypes.h"
#include "YAISense_CustomHearing.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class UYAISense_CustomHearing : public UAISense_Hearing {
    GENERATED_BODY()
public:
    UYAISense_CustomHearing();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReportCustomNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag);
    
};

