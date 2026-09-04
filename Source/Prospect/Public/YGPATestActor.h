#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YGPATestActor.generated.h"

class UYGPATestComponent;
class UYGameplayAttributesComponent;

UCLASS(Blueprintable)
class AYGPATestActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYGameplayAttributesComponent* m_gameplayAttributesComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYGPATestComponent* m_gpaTestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_floatAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_intAttribute;
    
public:
    AYGPATestActor(const FObjectInitializer& ObjectInitializer);

};

