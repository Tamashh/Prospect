#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YControllerMatchmakingComponent.generated.h"

class UYControllerInventoryInsuranceComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerMatchmakingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYControllerMatchmakingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnInsuranceComponentUpdated(UYControllerInventoryInsuranceComponent* insuranceComponent);
    
};

