#pragma once
#include "CoreMinimal.h"
#include "YGameState_Base.h"
#include "YGameState_CharacterSelection.generated.h"

UCLASS(Blueprintable)
class AYGameState_CharacterSelection : public AYGameState_Base {
    GENERATED_BODY()
public:
    AYGameState_CharacterSelection(const FObjectInitializer& ObjectInitializer);

};

