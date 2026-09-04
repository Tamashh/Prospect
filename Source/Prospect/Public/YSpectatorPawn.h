#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "YSpectatorPawn.generated.h"

UCLASS(Blueprintable)
class AYSpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    AYSpectatorPawn(const FObjectInitializer& ObjectInitializer);

};

