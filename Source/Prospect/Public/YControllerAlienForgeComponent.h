#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YControllerAlienForgeComponent.generated.h"

class AActor;
class UYControllerAlienForgeComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerAlienForgeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYControllerAlienForgeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerAlienForgeComponent* FindControllerAlienForgeComponentChecked(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerAlienForgeComponent* FindControllerAlienForgeComponent(AActor* actorContext);
    
};

