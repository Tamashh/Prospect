#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YSquadInfo.h"
#include "YGameSquadsComponent.generated.h"

class AYPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYGameSquadsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYGameSquadsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSquadWithPlayer(const AYPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSquadWithId(const FString& squadId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYSquadInfo GetSquadFromPlayer(const AYPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYSquadInfo GetSquadFromId(const FString& squadId) const;
    
};

