#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "YPlayerAnimEvalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerAnimEvalComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYPlayerAnimEvalComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGameplayTagContainer GetAnimationDeathTags();
    
};

