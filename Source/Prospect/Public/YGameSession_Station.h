#pragma once
#include "CoreMinimal.h"
#include "YGameSession_Base.h"
#include "YGameSession_Station.generated.h"

UCLASS(Blueprintable)
class AYGameSession_Station : public AYGameSession_Base {
    GENERATED_BODY()
public:
    AYGameSession_Station(const FObjectInitializer& ObjectInitializer);

};

