#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YAIAggroUpdaterComponent.generated.h"

class UYAIAggroComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYAIAggroUpdaterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYAIAggroComponent*> m_registeredAggroComponents;

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYAIAggroComponent*> m_remainingAggroComponentsToEvaluate;

public:
    UYAIAggroUpdaterComponent(const FObjectInitializer& ObjectInitializer);

};
