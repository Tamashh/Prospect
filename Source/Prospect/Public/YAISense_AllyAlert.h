#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "YAIAllyAlertEvent.h"
#include "YAISense_AllyAlert.generated.h"

class AActor;
class AYAISquad;

UCLASS(Blueprintable)
class UYAISense_AllyAlert : public UAISense {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAIAllyAlertEvent> m_registeredEvents;
    
public:
    UYAISense_AllyAlert();

    UFUNCTION(BlueprintCallable)
    static void RegisterAllyAlertEvent(AYAISquad* squad, AActor* sender, AActor* targetSensed);
    
};

