#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YRuntimeVehicleData.h"
#include "YVehicleActorBIComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYVehicleActorBIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYVehicleActorBIComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnDataChanged(FYRuntimeVehicleData oldData, FYRuntimeVehicleData newData);
    
};

