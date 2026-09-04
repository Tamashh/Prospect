#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YGPAComponentTestActor.generated.h"

class UYGameplayAttributesComponent;

UCLASS(Blueprintable)
class AYGPAComponentTestActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYGameplayAttributesComponent* m_gameplayAttributesComponent;
    
public:
    AYGPAComponentTestActor(const FObjectInitializer& ObjectInitializer);

};

