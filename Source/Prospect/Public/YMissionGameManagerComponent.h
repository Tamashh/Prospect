#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YMissionGameManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYMissionGameManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYMissionGameManagerComponent(const FObjectInitializer& ObjectInitializer);

};

