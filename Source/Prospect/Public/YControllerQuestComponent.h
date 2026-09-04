#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YControllerQuestComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerQuestComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYControllerQuestComponent(const FObjectInitializer& ObjectInitializer);

};

