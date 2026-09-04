#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YStateSquadComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYStateSquadComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYStateSquadComponent(const FObjectInitializer& ObjectInitializer);

};

