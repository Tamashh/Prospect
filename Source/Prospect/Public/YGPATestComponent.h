#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YGPATestComponent.generated.h"

class UYGameplayAttributesComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYGPATestComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYGameplayAttributesComponent* m_gameplayAttributesComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxHealth;
    
public:
    UYGPATestComponent(const FObjectInitializer& ObjectInitializer);

};

