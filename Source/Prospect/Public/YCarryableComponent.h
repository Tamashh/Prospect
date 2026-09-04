#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YCarryableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYCarryableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYCarryableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString BP_GetDebugDescription();
    
};

