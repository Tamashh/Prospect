#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YDealtDamageData.h"
#include "YPlayerStatsKillsComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerStatsKillsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYPlayerStatsKillsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPlayerCharacterSet(APawn* oldPawn, APawn* newPawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDamageDealt(const FYDealtDamageData& dealtDamageData);
    
};

