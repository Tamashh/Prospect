#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YLightningComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYLightningComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYLightningComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLightningDebugChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLightningDebugLevel() const;
    
};

