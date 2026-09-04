#pragma once
#include "CoreMinimal.h"
#include "YCharacterCustomizationExplicitCustomizationActor.h"
#include "AYNPCCharacter.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API AAYNPCCharacter : public AYCharacterCustomizationExplicitCustomizationActor {
    GENERATED_BODY()
public:
    AAYNPCCharacter(const FObjectInitializer& ObjectInitializer);

};

