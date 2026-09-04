#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YAutoDestroyComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYAutoDestroyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYAutoDestroyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnRelatedPlayerCharacterDestroyed(AActor* actorDestroyed);
    
};

