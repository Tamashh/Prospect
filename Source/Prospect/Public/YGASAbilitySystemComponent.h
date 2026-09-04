#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "YGASAbilitySystemComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYGASAbilitySystemComponent : public UAbilitySystemComponent {
    GENERATED_BODY()
public:
    UYGASAbilitySystemComponent(const FObjectInitializer& ObjectInitializer);

};

