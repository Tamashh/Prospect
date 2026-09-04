#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YDealtDamageData.h"
#include "YPlayerStatsDeathsComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerStatsDeathsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYPlayerStatsDeathsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPlayerCharacterSet(APawn* oldPawn, APawn* newPawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(const FYDealtDamageData& takenDamageData);
    
};

