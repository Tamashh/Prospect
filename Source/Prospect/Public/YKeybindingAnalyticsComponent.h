#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YKeybindingAnalyticsComponent.generated.h"

class UYKeybindingsManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYKeybindingAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYKeybindingAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnKeybindingsLoaded(UYKeybindingsManager* keybindingManager);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnKeybindingsChanged(UYKeybindingsManager* keybindingManager);
    
};

