#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YPlayerCharacterDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerCharacterDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYPlayerCharacterDebugComponent(const FObjectInitializer& ObjectInitializer);

};

