#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YPlayerCameraFoVComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerCameraFoVComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYPlayerCameraFoVComponent(const FObjectInitializer& ObjectInitializer);

};

