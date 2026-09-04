#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YAITokenComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYAITokenComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_hasDamageTokenForCurrentTarget;
    
    UYAITokenComponent(const FObjectInitializer& ObjectInitializer);

};

