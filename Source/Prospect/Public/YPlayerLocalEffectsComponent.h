#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EYPlayerLocalEffect.h"
#include "YPlayerLocalEffectsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerLocalEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYPlayerLocalEffectsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRPCApplyEffect(EYPlayerLocalEffect Effect, FVector instigatorPosition);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ApplyEffect(EYPlayerLocalEffect Effect, FVector instigatorPosition);

};
