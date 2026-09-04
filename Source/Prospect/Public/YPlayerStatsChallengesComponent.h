#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YPlayerStatsChallengesComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerStatsChallengesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYPlayerStatsChallengesComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void IncrementChallengesCompleted(int32 dailyChallengesCompleted, int32 weeklyChallengesCompleted, int32 seasonChallengesCompleted);
    
};

