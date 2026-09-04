#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "YCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYCapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UYCapsuleComponent(const FObjectInitializer& ObjectInitializer);

};

