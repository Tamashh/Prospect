#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YAbstractMissionActor.generated.h"

UCLASS(Blueprintable)
class AYAbstractMissionActor : public AActor {
    GENERATED_BODY()
public:
    AYAbstractMissionActor(const FObjectInitializer& ObjectInitializer);

};

