#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YReverbRelevancyCalculatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYReverbRelevancyCalculatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYReverbRelevancyCalculatorComponent(const FObjectInitializer& ObjectInitializer);

};

