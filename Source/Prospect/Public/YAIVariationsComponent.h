#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YAIVariationsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAIVariationsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYAIVariationsComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnLoadedAssets() const;
    
};

