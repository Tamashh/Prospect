#pragma once
#include "CoreMinimal.h"
#include "YGameState_Base.h"
#include "YGameState_Station.generated.h"

UCLASS(Blueprintable)
class AYGameState_Station : public AYGameState_Base {
    GENERATED_BODY()
public:
    AYGameState_Station(const FObjectInitializer& ObjectInitializer);

};

