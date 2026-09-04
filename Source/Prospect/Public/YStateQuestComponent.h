#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YStateQuestComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYStateQuestComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYStateQuestComponent(const FObjectInitializer& ObjectInitializer);

};

